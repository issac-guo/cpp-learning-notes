#ifndef _BANK_ACCOUNT_H_
#define _BANK_ACCOUNT_H_
#include<string>
#include<regex>

class BankAccount{
public:
    BankAccount(std::string account){
        std::regex pattern("^[1-9]\\d{7}$");
        if (std::regex_match(account,pattern)){
            this->account = account;
        }
        else{
            this->account = "";
        }
        this->balance = 0;
    } 
    
    BankAccount(std::string account, double balance){
        std::regex pattern("^[1-9]\\d{7}$");
        if (std::regex_match(account, pattern)){
            this->account = account;
        }
        else{
            this->account = "";
        }
        if (balance < 0){
            this->balance = 0;
        }
        else{
            this->balance = balance;
        }
    }

    std::string getAccount(){
        return account;
    }
    void SetAccount(std::string account){
        std::regex pattern("^[1-9]\\d{7}$");
        if (std::regex_match(account,pattern)){
            this->account = account;
        }
    }

    double getBalance(){
        return balance;
    }
    void setBalance(double balance){
        this->balance = balance;
    }

    void deposit(double amount){
        if (amount < 0){
            throw std::invalid_argument("金额不能为负数");
        }
        this->balance += amount;
    }

    void withdraw(double amount){
        if (amount <= 0){
            throw std::invalid_argument("金额不能为负数");
        }
        if (amount > balance){
            throw std::invalid_argument("余额不足");
        }
        this->balance -= amount;
    }
    //友元函数（类外函数与类关联）
    friend std::ostream& operator<<(std::ostream& os, const BankAccount& bankAccount);

private:
    std::string account;
    double balance;
    double amount;
};

//函数operator<<   运算符重载函数 要写在类外  改变原有<<逻辑， <<会触发此函数
std::ostream& operator<<(std::ostream& os, const BankAccount& bankAccount){
        os << "Account: " << bankAccount.account << ",余额:" << bankAccount.balance;
        return os;
    }

#endif