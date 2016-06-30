#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    Employee();
    void getData(); //setter
    void putData(); //getter
private:
    string _name;
    long _number;
};

#endif // EMPLOYEE_H
