#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int t = *x;
    *x = *y;
    *y = t;
}

int main(){
    int x = 2, y = 3;
    swap(&x,&y);
    cout << "x = " << x << ",y = " << y << endl;
    return 0; 
}