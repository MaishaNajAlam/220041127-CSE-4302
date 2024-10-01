#include <iostream>
#include "employee.h"

using namespace std;

int main()
{
    Employee e1,e2;
    e1.setInfo();
    e2.setInfo();


    cout << "\nEmployee 1 Info:" << endl;
    e1.getInfo();
    cout << "\nEmployee 2 Info:" << endl;
    e2.getInfo();

    Employee aged=e1.compareAge(e2);
    cout << "\nElder Employee Info:" << endl;
    aged.getInfo();
}
