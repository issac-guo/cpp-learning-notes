#ifndef _FULL_TIME_EMPLOYEE_H
#define _FULL_TIME_EMPLOYEE_H
#include "Employee.h"

class FullTimeEmployee:public Employee{
public:
    FullTimeEmployee(
        std::string id, 
        std::string name, 
        double baseSalary, 
        double bonus
    ):Employee(id,name){
        this->baseSalary = baseSalary;
        this->bonus = bonus;
    }

    double getBaseSalary(){
        return baseSalary;
    }
    void setBaseSalary(double baseSalary){
        this->baseSalary = baseSalary;
    }

    double getBonus(){
        return bonus;
    }
    void setBonus(double bonus){
        this->bonus = bonus;
    }

    double calculatePay(){
        return baseSalary + bonus;
    }

private:
    double baseSalary;
    double bonus;
};

#endif