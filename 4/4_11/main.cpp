#include <iostream>
using namespace std;
struct times
{
    int h,m,s;
};

int main()
{
    times t1,t2,t3;
    long totalsec1,totalsec2,totalsec3;
    char ch;
    cout<<"Введите первое значение ";
    cin>>t1.h>>ch>>t1.m>>ch>>t1.s;
    cout<<"Введите второе значение ";
    cin>>t2.h>>ch>>t2.m>>ch>>t2.s;
    totalsec1 = t1.h*3600+t1.m*60+t1.s;
    totalsec2 = t2.h*3600+t2.m*60+t1.s;
    totalsec3 = totalsec1+totalsec2;
    t3.h=totalsec3/3600;
    t3.m=totalsec3/60-t3.h*60;
    t3.s=totalsec3-t3.m*60-t3.h*3600;
    cout<<t3.h<<':'<<t3.m<<':'<<t3.s<<endl;
    return 0;
}
