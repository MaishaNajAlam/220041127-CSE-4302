#include<iostream>
#include "employee.h"
#include<string>


void Employee::set_name(string s)
{
    if(s.length()>2)
    {
        name=s;
    }
    else name="John Doe";

}
void Employee::set_dob(string n)
{
    if(isValid(n))
    {
        dob=n;
    }
    else
    {
        dob="01/01/2002";
    }
}

void Employee::set_salary(double y)
{
    if(y>=10000 && y<=100000)
    {
        salary=y;
    }
    else salary=10000;
}

void Employee::setInfo()
{
    string str1,str2;
    double d;
    cout<<"Enter Name:";
    cin>>str1;
    cout<<"Enter DOB:";
    cin>>str2;
    cout<<"Enter Salary:";
    cin>>d;

    set_name(str1);
    set_dob(str2);
    set_salary(d);
}

void Employee::getInfo()
{

    cout<<"Name:"<<get_name()<<endl;
    cout<<"DOB:"<<get_dob()<<endl;
    cout<<"Salary:"<<get_salary()<<endl;
}

Employee Employee::compareAge(Employee e2)
{

    int y1,y2;
    y1=stoi(get_dob().substr(6,4));
    y2=stoi(e2.get_dob().substr(6,4));

    if(y1<y2) return *this;
    else return e2;

}







