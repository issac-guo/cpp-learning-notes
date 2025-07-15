#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
    const double PI = 3.14159;
    double r;
    double area;

    cout << "Radius: ";    //不换行，不加endl
    cin >> r;        //从键盘读取数据传给变量r

    area = PI * pow(r,2);
    cout << "Area = "<< fixed << setprecision(2) << area << endl;
    // fixed setprecision 保证以后所有输出都是保留两位小数
    return 0; 
}