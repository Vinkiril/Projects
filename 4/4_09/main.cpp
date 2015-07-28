#include <iostream>
using namespace std;

struct timess
{
    int h,m,s;
};

int main()
{

    long totalsec;
    timess t1;
    cout<<"Введите время ";
    cin>>t1.h>>t1.m>>t1.s;
    totalsec = t1.h*3600+t1.m*60+t1.s;
    cout<<"totalsec = "<<totalsec<<endl;
    return 0;
}
