#include <iostream>
using namespace std;
double power(double n, int p=2)
{
    double ans =1;
    for (int i=0;i<p;i++)
    {
        ans=n*ans;
    }
    return ans;
}

int main()
{   int p;
    double n;
    cout<<"enter n ";
    cin>>n;
    cout<<"Enter power ";
    //cin>>p;
    cout<<"n^p= "<<power(n,p)<<endl;
    return 0;
}
