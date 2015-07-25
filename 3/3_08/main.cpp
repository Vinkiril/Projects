#include <iostream>
using namespace std;

int main()
{
    char ch;
    int a,b,c,d,e,f,ans1,ans2,ans3;
    do
    {
        cout<<"Введите первую сумму ";
        cin>>a>>b>>c;
        cout<<"Введите вторую сумму ";
        cin>>d>>e>>f;
        ans1=a+d;
        ans2=b+e;
        if(ans2>19)
        {
            ans1++;
            ans2=ans2-20;
        }
        ans3=c+f;
        if(ans3>11)
        {
            ans2++;
            ans3=ans3-12;
        }
        cout<<"Сумма: "<<ans1<<' '<<ans2<<' '<<ans3<<endl;
        cout<<"Еще раз (y/n)? ";
        cin>>ch;
    }while (ch!='n');
    return 0;
}
