#include<stdio.h>

int main(){
    char s[] = {'a','b','c','d','e','f','g','h','\0'};
    int *p = s;
    printf("%p\n",&s[0]);      //输出一个十六进制地址的格式
    printf("%p\n",&s[1]); 
    // printf("%c\n",*p);
    printf("%d\n",*p);     //如果int*p,则会把abcd的二进制拼起来转成十进制（占用4个字节）
    // cout << &(s[0]) << endl;
    // cout << &(s[1]) << endl;
    return 0; 
}