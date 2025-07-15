#include<iostream>
#include"student.h"
using namespace std;

void add_age(Student s){
    s.setAge(s.getAge() + 1);
}

void add_age(Student *s){
    s->setAge(s->getAge() + 1);
}

int main(){
    Student s1("Alice",19);
    add_age(s1);     //只是复制一份s1,所以年龄不会增加
    cout << s1.introduce() << endl;
    Student *s2 = new Student("Bob",20,95);
    add_age(s2);     //使用指针，可以使年龄增加
    cout << s2->introduce() << endl;
    delete s2;       //归还空间
    return 0; 
}