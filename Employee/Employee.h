#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
#include<string>

class Employee{
public:
    Employee(std::string id,std::string name){       
        this->name = name;
        this->id = id;
    }  

    std::string getId(){
        return id;
    }
    void setId(std::string id){
        this->id = id;
    }

    std::string getName(){
        return name;
    }
    void setName(std::string name){
        this->name = name;
    }

//等价于java的抽象方法，需要子类实现  （= 0 表示目前还没有实现）
virtual double calculatePay() = 0;      //纯虚函数

private:
    std::string name;
    std::string id;
};

#endif