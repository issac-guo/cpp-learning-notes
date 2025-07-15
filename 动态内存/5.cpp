#include<iostream>
using namespace std;

class Example{
public:
    Example(){
        cout << "构造函数被调用" << endl;
        a = new int[10];
    }
    //析构函数。   发生在对象销毁之前
    ~Example(){
        cout << "析构函数被调用" << endl;
        delete[] a;      //销毁数组a
    }
private:
    int* a;
};


int main(){
    Example* ex1 = new Example();
    delete ex1;      //调用析构函数
    return 0;   
}