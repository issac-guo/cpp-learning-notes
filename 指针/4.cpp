#include<iostream>
using namespace std;

int main(){
    double a;
    double* p = NULL;   //NULL = 0    *p不能访问0地址
    // double *p = nullptr;
    cout << a << endl;
    cout << p << endl;
    // cout << *p << endl;
    // *p = 1;    //强行篡改别的变量值

    int c[3] = {1,2,3};
    cout << c[3];     //数组越界随机分配内存后面一个值
    return 0; 
}