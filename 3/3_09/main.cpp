#include <iostream>
using namespace std;

int main()
{   int g,s,ans=1;

    cout<<"Сколько гостей? ";
    cin>>g;
    cout<<"Число мест ";
    cin>>s;
    for(int i=0;i<s;i++)
    {
        ans=ans*g;
        g--;

    }
    cout<<ans<<endl;
    return 0;
}
