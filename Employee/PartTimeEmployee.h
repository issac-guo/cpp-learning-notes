#ifndef PART_TIME_EMPLOYEE_H_
#define PART_TIME_EMPLOYEE_H_
#include "Employee.h"

class PartTimeEmployee:public Employee{
public:
    PartTimeEmployee(
        std::string id, 
        std::string name, 
        double hourlyRate,
        int hoursWorked
    ):Employee(id,name){
        this->hourlyRate = hourlyRate;
        this->hoursWorked = hoursWorked;
    }

    double getHourlyRate(){
        return hourlyRate;
    }
    void setHourlyRate(double hourlyRate){
        this->hourlyRate = hourlyRate;
    }

    double setHoursWorked(){
        return hourlyRate;
    }
    void setHoursWorked(double hourlyRate){
        this->hourlyRate = hourlyRate;
    }

    double calculatePay(){
        return hourlyRate * hoursWorked;
    }

private:
    double hourlyRate;
    int hoursWorked;
};  
#endif