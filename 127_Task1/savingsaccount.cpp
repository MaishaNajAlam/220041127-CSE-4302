#include "savingsaccount.h"
#include<iostream>

using namespace std;

SavingsAccount::SavingsAccount()
{
    //ctor
}

SavingsAccount::~SavingsAccount()
{
    //dtor
}

void SavingsAccount::set_name(const string& s){
    acc_name=s;
}

void SavingsAccount::set_address(const string& s){
    address=s;
}

void SavingsAccount::set_rate(double d){
    interest_rate=d;

}
void SavingsAccount::set_balance(double b){
    current_balance=b;
    min_balance=b;
}

double SavingsAccount::calculateInterest(int p)const{

    double monthly=interest_rate/12;
    double interest=monthly * min_balance*p;

    return interest;

}

void SavingsAccount::deposit(double amount){

    current_balance+=amount;

}

void SavingsAccount::withdrawal(double amount){

    if (current_balance - amount >= 0) {
        current_balance -= amount;
    }
    if (current_balance < min_balance) {
        min_balance = current_balance;
    }

}


void SavingsAccount::disburseInterest(int periodInMonth){

    double ins=calculateInterest(periodInMonth);
    deposit(ins);
    min_balance=current_balance;

}




