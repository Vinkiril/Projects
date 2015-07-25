#include <iostream>
using namespace std;

int main()
{   char ch,ch1;
    float x,y,z;
    do
    {
        cout<<"Введите первый операнд и второй операнд: ";
        cin>>x>>ch1>>y;
        switch(ch1)
        {
            case '+':
                z=x+y;
            break;
            case '-':
                z=x-y;
            break;
            case '*':
                z=x*y;
            break;
            case '/':
                if(y==0)
                {
                    cout<<"Некорректный делитель!\n";
                    continue;
                }
                z=x/y;
                break;
        }
        cout<<"Результат равен "<<z<<endl;
        cout<<"Выполнить еще одну операцию y/n: ";
        cin>>ch;
    }
    while(ch=='y');
    return 0;
}
