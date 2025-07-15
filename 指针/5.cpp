#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,4,6,9,8};
    int n = sizeof(arr) / sizeof(int);
    cout << arr << endl;        //数组的内存地址，数组名字等于内存地址
    cout << &arr << endl;       //与上面效果等价
    cout << arr[0] << endl;     //输出值
    cout << &arr[0] << endl;    //第0个元素地址等于数组的首地址
    cout << &arr[1] << endl;    //第0个元素与第1个元素相差4个字节
    cout << &arr[5] << endl;    //地址名字为16进制
    cout << arr + 5 << endl;    //不是数值加5，根据类型往后跳5个元素
    int *p = arr;     //p指向首元素的地址
    cout << *(p+3) << endl;     //效果等于arr[3]
    for (int i=0; i<n; i++){
        cout << *p << endl;
        p++;
    }
    return 0; 
}