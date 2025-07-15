#include<iostream>
#include<cmath>

using namespace std;
bool solve(double a, double b, double c, double* x1, double* x2){
    double delta = b * b - 4 * a * c;
    if (delta < 0){
        return false;
    }
    *x1 = (-b + sqrt(delta)) / (2 * a);
    *x2 = (-b - sqrt(delta)) / (2 * a);
    return true;
}

int main(){
    double a,b,c;
    cin >> a >> b >> c;
    double x1,x2;
    if(solve(a,b,c,&x1,&x2)){
        cout << "x1 = " << x1 << ",x2 = " << x2 <<endl;
    }
    else{
        cout << "无解" << endl;
    }
    return 0; 
}