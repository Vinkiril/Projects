#include <iostream>
using namespace std;

int main()
{
    char ch,dch,oper;
    int a,b,c,d,ans1,ans2;

    do
    {
        cout<<"Введите первую дробь: ";
        cin>>a>>dch>>b;
        cout<<"Введите операцию: ";
        cin>>oper;
        cout<<"Введите вторую дробь: ";
        cin>>c>>dch>>d;
        switch (oper)
        {
            case '+':
            {
                ans1=a*d+b*c;
                ans2=b*d;
                break;
            }
            case '-':
            {
                ans1=a*d-b*c;
                ans2=b*d;
                break;
            }
            case '*':
            {
                ans1=a*c;
                ans2=b*d;
                break;
            }
            case '/':
            {
                ans1=a*d;
                ans2=b*c;
                break;
            }
        default:
            cout<<"Неверный оператор"<<endl;
            continue;
        }
        cout<<"Ответ "<<ans1<<'/'<<ans2<<endl;
        cout<<"Выполнить еще одну операцию y/n: ";
        cin>>ch;
    }while(ch!='n');
    return 0;
}
