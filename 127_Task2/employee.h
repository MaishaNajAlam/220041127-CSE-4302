#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
using namespace std;


class Employee
{
private:
    string name;
    string dob;
    double salary;

    bool isValid(string s)
    {
        int d,m,y;
        d=stoi(s.substr(0,2));
        m=stoi(s.substr(3,2));
        y=stoi(s.substr(6,4));

        int current=2024;

        if(current-y>=18)
        {
            return true;
        }
        return false;


    }

public:


    string get_name()
    {
        return name;
    }
    string get_dob()
    {
        return dob;
    }
    double get_salary()
    {
        return salary;
    }
    void set_name(string s);
    void set_dob(string n);
    void set_salary(double y);
    void setInfo();
    void getInfo();
    Employee compareAge(Employee e2);



};

#endif // EMPLOYEE_H
