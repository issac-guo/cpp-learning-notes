#include<iostream>
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"

using namespace std;

int main(){
    FullTimeEmployee* ft1 = new FullTimeEmployee("5170001","Tom",6000,2500);
    cout << "名字:" << ft1->getName() << "工资:" << ft1->calculatePay() << endl;

    PartTimeEmployee* pt1 = new PartTimeEmployee("23124099","Mike",50,8);
    cout << "名字:" << pt1->getName() << "工资:" << pt1->calculatePay() << endl;
    delete ft1;
    delete pt1;

    Employee* employees[] = {
        new FullTimeEmployee("5170001","Tom",6000,2500),
        new PartTimeEmployee("23124099","Mike",50,8),
        new FullTimeEmployee("001", "Alice", 5000, 500),
        new FullTimeEmployee("002", "Bob", 6000, 600),
        new PartTimeEmployee("003", "John", 100, 12),
        new FullTimeEmployee("004", "Jason", 12000, 500)
    };

    for(Employee* e: employees){
        cout << "名字:" << e->getName() << "工资:" << e->calculatePay() << endl;
    }

    //逐个归还数组的每一项，而不是整个数组(因为没有直接申请整个数组)
    //申请的内容和还的对象类型要一致，不能是Employee类型
    for (int i=0; i<6; i++){
        delete employees[i];
    }
    return 0;
}