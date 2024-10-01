#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include<string>
using namespace std;

class SavingsAccount
{
public:
    SavingsAccount();
    ~SavingsAccount();

    string get_name()
    {
        return acc_name;
    }
    string get_address()
    {
        return address;
    }

    double get_rate()
    {
        return interest_rate;
    }
    double get_balance()
    {
        return current_balance;
    }
     double get_minbalance()
    {
        return min_balance;
    }

    void set_name(const string& s);
    void set_address(const string& a);
    void set_rate(double d);
    void set_balance(double b);


    void deposit(double amount);
    void withdrawal(double amount);
    void disburseInterest(int periodInMonth);
    double calculateInterest(int periodMonths)const;


protected:

private:
    string acc_name;
    string address;
    double interest_rate;
    double current_balance;
    double min_balance;

};

#endif // SAVINGSACCOUNT_H
