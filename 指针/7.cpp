#include<iostream>
using namespace std;

//引用
int swap(int& x, int& y){
    int t = x;
    x = y;
    y = t;
}

int main(){
    // int a = 3;
    // int& b = a;      //b和a是同一个变量，给a取别名b
    // cout << &a << endl;
    // cout << &b << endl;
    int a = 3, b = 5;
    swap(a,b);
    cout << a << endl;
    cout << b << endl;
    return 0; 
}