#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<string>

class Student{                //不强制大写
public:
    Student(std::string name, int age){
        this->name = name;     //this是一个特殊指针，指向当前对象
        this->age = age;
        this->score = 0;
    }

    Student(std::string name, int age, double score){
        this->name = name;     //this是一个特殊指针，指向当前对象
        this->age = age;
        this->score = score;
    }

    std::string getName(){
        return name;
    }
    void setName(std::string name){
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

    std::string introduce(){
        return "My name is " + name + ",age is " + std::to_string(age) + ",score is " + std::to_string(score);
    }

private:
    std::string name;
    int age;
    double score;
};

#endif