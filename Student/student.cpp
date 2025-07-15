#include<iostream>
using namespace std;    //默认std为前缀，则cout前不用加
//一般只在主函数写

class Student{                //不强制大写
public:
    Student(string name, int age){
        this->name = name;     //this是一个特殊指针，指向当前对象
        this->age = age;
        this->score = 0;
    }

    Student(string name, int age, double score){
        this->name = name;     //this是一个特殊指针，指向当前对象
        this->age = age;
        this->score = score;
    }

    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }

    int getAge(){
        return age;
    }
    void setAge(int age){
        this->age = age;
    }

    double getScore(){
        return score;
    }
    void setScore(double score){
        this->score = score;
    }

    string introduce(){
        return "My name is " + name + ",age is " + to_string(age) + ",score is " + to_string(score);
    }

private:
    string name;
    int age;
    double score;
};


int main(){
    // int a = 1;    //栈内
    // int *p = new int;  //堆内
    // *p = 1;
    Student s1("Ben",16);
    Student s2("Sally",19,86);
    // cout << s1.getName() <<  " " << s2.getAge() << endl;
    cout << s1.introduce() << endl;
    cout << s2.introduce() << endl;

    Student *s3 = new Student("Lily",22,98);    //s3是一个指针在栈里，指向堆里new出来的学生类。
    cout << s3->introduce() << endl;    //如果是指针(eg.s3)，则用->调用类里的函数
    // cout << (*s3).introduce() << endl;  //与上一行等价
    
    return 0; 
}