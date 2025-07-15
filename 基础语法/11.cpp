#include<iostream>   //展开头文件
#define PI 3.14159
#define SQUARE(x) (x)*(x)

using namespace std;

//控制台运行
//  g++ 11.cpp calculate.cpp -o 11      
//  ./12

//cpp编译步骤   cpp->预处理->
//预处理: g++ -E main.cpp -o main.i

int square(int x){
    return x * x;
}

int main(){
    int a = 5;
    cout << a * a << endl;
    cout << "hellow world" << endl;
    cout << PI * PI << endl;
    cout << SQUARE(4+2) << endl;    // 4+2*4+2=14
    cout << square(4+2) << endl;
    return 0; 
}