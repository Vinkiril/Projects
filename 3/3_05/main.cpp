#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n=1;
    for(int i=0;i<20;i++)
    {   cout<<setw(20-i);
        for(int j=0;j<n;j++)
        {
            cout<<'X';

        }
        cout<<endl;
        n=n+2;
    }
    return 0;
}
