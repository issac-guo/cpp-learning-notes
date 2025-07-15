#include<iostream>
using namespace std;
//   编译命令 g++ 8.cpp -o main
//  ./main
int factorial(int n);

int main(){
    int t = factorial(5);
    cout << t << endl;
    return 0; 
}

int factorial(int n){
    if (n == 0){
        return 1;
    }           //结束条件
    return factorial(n - 1) * n;
}

