#include <iostream>
using namespace std;
long HmsToSec(int h, int m, int s)
{
    long ans;
    m=h*60+m;
    ans=m*60+s;
    return ans;
}

int main()
{   long ans;
    int h,m,s;
    while(h!=0 || m!=0 || s!=0)
    {
        cout<<"enter hours ";
        cin>>h;
        cout<<"enter minuts ";
        cin>>m;
        cout<<"enter seconds ";
        cin>>s;
        ans = HmsToSec(h,m,s);
        cout<<"seconds = "<<ans<<endl;
    }
    return 0;
}
