#include<iostream>
using namespace std;

int main(){
    int* p = (int*)malloc(100);     //在堆中从下到上申请100个字节的空间（低地址到高地址）
    cout << p << endl;         //堆的空间不会自动释放
    // int n = 0;       //记录申请内存的次数
    // while(p = malloc(100 * 1024)){
    //     n++;         //电脑会死机！
    // }
    //程序结束后堆才会释放
    free(p);          //释放的是p指向的那块空间，指针不会释放，空间的所属权归给系统
    //还的地址和借的地址要相同，不要写free(p++)。还的时候要还原始地址可以使用int* q = p, p++, free(q)
    //如果空间没有被其他指针指向，则不会与p发生冲突，但p已经没有所属权了
    // *p = 55;
    return 0; 
}