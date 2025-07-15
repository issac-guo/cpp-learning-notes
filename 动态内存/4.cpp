#include<iostream>
using namespace std;

int main(){
    int *p = new int;    //在堆里申请4个字节大小的空间
    *p = 8;
    cout << *p << endl;
    double *q = new double;
    *q = 3.14;
    cout << *q << endl;
    int *r = new int[4];     //在堆里申请1个长度4的整型数组
    r[0] = 9;
    r[1] = 8;
    r[2] = 1;
    r[3] = 6;
    cout << r[1] << endl;
    delete p;      //释放p这块内存的空间
    delete q;
    delete[] r;    //释放r数组这块内存空间
    
    return 0; 
}