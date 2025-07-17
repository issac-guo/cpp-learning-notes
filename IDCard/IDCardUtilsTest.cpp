#include<iostream>
#include"IDCardUtils.h"
using namespace std;

int main(){
    //调用静态类需要::
    cout << IdCardUtils::isValidIdCard("330825199610281021") << endl;
    cout << IdCardUtils::isValidIdCard("34120219890305363x") << endl;
    cout << IdCardUtils::isValidIdCard("123456789012345678") << endl;
    cout << IdCardUtils::isValidIdCard("34120219890305363X") << endl;
    cout << IdCardUtils::isValidIdCard("33333082519961028102121122") << endl;
    cout << IdCardUtils::maskIdCard("330825199610281021") << endl;
    cout << IdCardUtils::getGender("330825199610281021") << endl;
    cout << IdCardUtils::getGender("34120219890305363x") << endl;
    cout << IdCardUtils::getAge("330825199610281021");
    return 0; 
}