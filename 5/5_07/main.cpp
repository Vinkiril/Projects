#include <iostream>
using namespace std;
double power(double& n, int p =2)
{
    double ans =1;
    for (int i=0;i<p;i++)
    {
        ans=n*ans;
    }
    return ans;
}

int power(int& n, int p =2)
{
    int ans =1;
    for (int i=0;i<p;i++)
    {
        ans=n*ans;
    }
    return ans;
}

long power(long& n, int p =2)
{
    long ans =1;
    for (int i=0;i<p;i++)
    {
        ans=n*ans;
    }
    return ans;
}
float power(float& n, int p =2)
{
    float ans =1;
    for (int i=0;i<p;i++)
    {
        ans=n*ans;
    }
    return ans;
}



int main()
{
    int p;
    float n;
    cout<<"enter n ";
    cin>>n;
    cout<<"Enter power ";
    cin>>p;
    cout<<"n^2= "<<power(n)<<endl;
    cout<<"n^p= "<<power(n,p)<<endl;
    return 0;
}
