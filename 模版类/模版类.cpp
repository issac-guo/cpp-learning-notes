#include<iostream>
using namespace std;

template <typename T>
class Box{
public: 
    Box(T value){
        this->value = value;
    }

    T getValue(){
        return value;
    }

private:
    T value;
};

int main(){
    Box<int> *box1 = new Box<int>(1);    //前后类名后都要写类型
    cout << box1->getValue() << endl;
    delete box1;

    Box<string> *box2 = new Box<string>("fjasj");    //前后类名后都要写类型
    cout << box2->getValue() << endl;
    delete box2;

    return 0; 
}