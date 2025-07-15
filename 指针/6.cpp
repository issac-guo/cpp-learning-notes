#include<iostream>
using namespace std;

int search(int* arr, int n, int key){
    //指针变量为8个字节
    // cout << n << endl;
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,3,4,6,9,8};
    int n = sizeof(arr) / sizeof(int);
    int i;
    cin >> i;
    cout << search(arr, n, i) << endl;
    return 0; 
}