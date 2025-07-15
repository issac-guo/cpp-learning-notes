#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << &a << endl;    //变量存储在栈中
    cout << &b << endl;    //从上往下（即从高地址转向低地址）
    if(1 == 1){
        float c = 3.14f;
        cout << &c << endl;    //出循环后c就会被销毁掉
    }
    double d = 2.71;
    cout << &d << endl;
    return 0; 
}