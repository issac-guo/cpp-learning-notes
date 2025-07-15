#include<iostream>
using namespace std;
#include"BankAccount.h"

int main(){
    BankAccount* account = new BankAccount("12345612",100);
    cout << *account << endl;
    // account->withdraw(190);
    account->withdraw(10);
    cout << *account << endl;

    try {
        account->deposit(-90);
        cout << *account << endl;
    }
    catch(std::exception e){
        cout << "不理会这个异常" << endl;
    }
    delete account;
    return 0; 
}