#include<iostream>
using namespace std;

int main(){
    int data = 3;
    int *p;     //指针    int*为一个整体
    p = &data;
    cout << "data = " << data << endl;
    cout << "data的地址 = " << &data << endl;
    cout << "p的地址 = " << &p << endl;
    cout << "p中保存的值 = " << p << endl;
    cout << *p << endl;      //取p指向空间的值
    return 0; 
}