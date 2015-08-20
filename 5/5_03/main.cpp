#include <iostream>
using namespace std;

void zeroSmaller(int& a, int& b)
{
    if(a<b)
        a=0;
    else
        b=0;
}

int main()
{   int a,b;
    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;
    zeroSmaller(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
