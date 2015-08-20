#include <iostream>
using namespace std;

struct date
{
    int m,d,y;
};

int main()
{
    date d1;
    char ch;
    cout<<"Введите дату(dd/mm/yyyy): \n";
    cin>>d1.d>>ch>>d1.m>>ch>>d1.y;
    cout<<d1.d<<'/'<<d1.m<<'/'<<d1.y<<endl;
    return 0;
}

