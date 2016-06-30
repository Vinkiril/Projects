#include <iostream>
#include "employee.h"
using namespace std;

int main()
{

    Employee employee[100];
    char ch;
    int n =0;
    do{
        employee[n++].getData();

        cout<<"continue?(y/n) :";
        cin>>ch;
    }while (ch!='n');

    for (uint16_t i =0; i<n;i++){
        employee[i].putData();
    }
    return 0;
}
