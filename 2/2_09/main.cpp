#include <iostream>
using namespace std;

int main()
{   int a,b,c,d,e,f;
    char ch;
    cout<<"Введите первую дробь: ";
    cin>>a>>ch>>b;
    cout<<"Введите вторую дробь: ";
    cin>>c>>ch>>d;
    e=a*d+b*c;
    f=d*b;
    cout<<"Сумма равна "<<e<<'/'<<f<<endl;
    return 0;
}
