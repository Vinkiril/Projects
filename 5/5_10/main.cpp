#include <iostream>
using namespace std;

int z=0;

void fucn()
{
    z++;
    cout<<z<<endl;
};

int main()
{

    for (int i=0;i<10;i++)
        fucn();
    return 0;
}
