#include <iostream>
using namespace std;

struct fraction
{
    int x,y;
};

int main()
{
    char ch,dch,oper;
    fraction a,b,c;
    do
    {
        cout<<"Введите первую дробь: ";
        cin>>a.x>>dch>>a.y;
        cout<<"Введите операцию: ";
        cin>>oper;
        cout<<"Введите вторую дробь: ";
        cin>>b.x>>dch>>b.y;
        switch (oper)
        {
            case '+':
            {
                c.x=a.x*b.y+a.y*b.x;
                c.y=a.y*b.y;
                break;
            }
            case '-':
            {
                c.x=a.x*b.y-a.y*b.x;
                c.y=a.y*b.y;
                break;
            }
            case '*':
            {
                c.x=a.x*b.x;
                c.y=a.y*b.y;
                break;
            }
            case '/':
            {
                c.x=a.x*b.y;
                c.y=a.y*b.x;
                break;
            }
        default:
            cout<<"Неверный оператор"<<endl;
            continue;
        }
        cout<<"Ответ "<<c.x<<'/'<<c.y<<endl;
        cout<<"Выполнить еще одну операцию y/n: ";
        cin>>ch;
    }while(ch!='n');
    return 0;
}
