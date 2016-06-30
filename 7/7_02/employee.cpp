#include "employee.h"
#include <cstring>

Employee::Employee()
{

}

void Employee::getData()
{

    cout<<"Введите номер"<<endl;
    cin>>_number;

    cout<<"Введите имя"<<endl;
    cin>>_name;

}

void Employee::putData()
{
    cout<<_number<<" ";
    cout<<_name<<endl;

}
