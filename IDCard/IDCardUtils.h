#ifndef IDCARD_UTILS_TEST_H
#define IDCARD_UTILS_TEST_H

#include <iostream>
#include <sstream>
#include <string>
#include <chrono>
#include <ctime>
#include <regex>
#include <cctype>

class IdCardUtils
{
public:
    static std::string maskIdCard(std::string id)
    {
        return id.substr(0, 6) + "********" + id.substr(14, 4);
        // substr(m,n) m为起始位置，n为往后多少个
    }

    static std::string getGender(std::string id)
    {
        return (id[16] - '0') % 2 != 0 ? "男" : "女";
    }

    static int getAge(std::string id)
    {
        std::string s = id.substr(6, 8);
        return calculateAge(s);
    }

    static bool isValidIdCard(std::string id){
        //正则表达式
        std::regex pattern("^\\d{6}"     //前6位表示地区码
                    "(18|19|20|21|22|23)\\d{2}"   //判断年份
                    "(([0][1-9])|(10|11|12))"   //判断月份     注意最外面要有括号
                    "(([0][1-9])|([12]\\d)|30|31)"  //判断日      ([0-2][1-9]|10|20|30|31)
                    "\\d{3}"
                    "[0-9Xx]$");        //判断倒数2-4位       (\d|x|X) 
        return std::regex_match(id,pattern) && checkSum(id);       
    }

private:
    static bool checkSum(std::string id)
    {
        int weight[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
        char checkNumber[] = {'1', '0', 'x', '9', '8', '7', '6', '5', '4', '3', '2'}; // 必须定义成字符！！
        int sum = 0;
        for (int i = 0; i < 17; i++)
        {
            sum += (id[i] - '0') * weight[i];
        }
        if (checkNumber[sum % 11] == std::tolower(id[17]))
        {
            return true;
        }
        return false;
    }

    static int calculateAge(const std::string &birthStr)
    {
        // 解析生日字符串
        int year, month, day;
        if (birthStr.length() != 8)
        {
            throw std::invalid_argument("日期格式错误，必须是 yyyymmdd");
        }
        year = std::stoi(birthStr.substr(0, 4));
        month = std::stoi(birthStr.substr(4, 2));
        day = std::stoi(birthStr.substr(6, 2));

        // 构造 tm 结构（生日）
        std::tm birth_tm = {};
        birth_tm.tm_year = year - 1900; // tm_year 是从 1900 开始算的
        birth_tm.tm_mon = month - 1;    // tm_mon 从 0 开始
        birth_tm.tm_mday = day;

        // 当前日期
        std::time_t now = std::time(nullptr);
        std::tm *now_tm = std::localtime(&now);

        // 计算年龄
        int age = now_tm->tm_year - birth_tm.tm_year;
        if ((now_tm->tm_mon < birth_tm.tm_mon) ||
            (now_tm->tm_mon == birth_tm.tm_mon && now_tm->tm_mday < birth_tm.tm_mday))
        {
            age--; // 还没过生日
        }
        return age;
    }
};

#endif