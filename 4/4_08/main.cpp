#include <iostream>
using namespace std;

struct fraction
{
    int x,y;
};

int main()
{
    char ch;
    fraction a,b,c;
    cout<<"Введите первую дробь: ";
    cin>>a.x>>ch>>a.y;
    cout<<"Введите вторую дробь: ";
    cin>>b.x>>ch>>b.y;
    c.x=a.x*b.y+a.y*b.x;
    c.y=b.y*a.y;
    cout<<"Сумма равна "<<c.x<<'/'<<c.y<<endl;
    return 0;
}
