#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;

int main(){
    int a = 10;
    char c = 'A';
    double b = 4.556;
    double d = 5.384488;
    // cout << c << endl;
    cout << fixed << setprecision(2) << b * d << endl;
    printf("%.2f\n",b * d);
    return 0;
}