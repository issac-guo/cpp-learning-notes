#include<iostream>
#include"mymath.h"
#include"calculate.h"     //调用factorial时候需要写
using namespace std;

int main(){
    cout << factorial_sum(2,3) << endl;
    cout << factorial(3) << endl;
    return 0; 
}