#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char s[] = "hello\0world";   //加上\0,有13位
    cout << sizeof(s) << endl;   //占多少内存，包括'\0',对任意元素都适用
    cout << strlen(s) << endl;   //不包括'\0' 读取到'\0'前结束

    string s2 = "today is a nice day";
    cout << s2 <<endl;
    cout << s2.length() <<endl;
    cout << s2.empty() <<endl;
    cout << s2.length() <<endl;
    cout << s2 + "!" <<endl;
    s2.insert(5,"sthdd");
    cout << s2 << endl;
    s2.erase(5,5);     //从指定位置删除几个字符
    cout << s2 << endl;
    s2.replace(11,4,"good");  //从第11个位置往后4个字符被替换为"good"
    cout << s2 << endl;
    string s3 = s2.substr(6,4);  //从第6位(包括)往后取4位
    cout << s3 << endl;
    cout << s2.find("r") << endl;  //找指定字符串在字符串中首次出现的位置

    string key;
    cout << "请输入关键词: ";
    cin >> key;
    if(s2.find(key) != string::npos){
        cout << "has found" << endl;
    }
    else{
        cout << "not found" << endl;
    }
    return 0; 
}