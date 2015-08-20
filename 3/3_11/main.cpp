#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,ans1,ans2,ans3;
    char ch, oper;
    do
    {
        cout << "Введите количество "<<endl;
        cin >> a>>b>>c>>oper>>d>>e>>f;
        switch(oper)
        {
            case '+':
                ans1=a+d;
                ans2=d+e;
                if(ans2>19)
                {
                    ans2=ans2-20;
                    ans1++;
                }
                ans3=c+f;
                if (ans3>11)
                {
                    ans3=ans3-12;
                    ans2++;
                }
            break;
            case '-':
                ans1=a-d;
                ans2=b-e;
                if(b<e)
                {
                    ans1--;
                    ans2=ans2+20;
                }
                ans3=c-f;
                if(c<f)
                {
                    ans2--;
                    ans3=ans3+12;
                }
            break;
        }
        cout<<"Результат равен "<<ans1<<' '<<ans2<<' '<<ans3<<endl;
        cout<<"Выполнить еще одну операцию y/n: ";
        cin>>ch;
    }while(ch=='y');
    return 0;
}
