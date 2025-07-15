#include<iostream>
using namespace std;

int main(){
    int arr[ ] = {3,6,8,2,4,9,0,1};
    cout << sizeof(int) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(arr) / sizeof(int) <<endl;
    return 0; 
}