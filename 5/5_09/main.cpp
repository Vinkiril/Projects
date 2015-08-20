#include <iostream>
using namespace std;
struct Time
{
    int hours;
    int minuts;
    int seocnds;
};

void swap (Time& a, Time& b)
{
    Time temp;
    temp = a;
    a=b;
    b=temp;

}

int main()
{
    Time a,b;
    cout<<"enter time a ";
    cin>>a.hours;
    cin.ignore();
    cin>>a.minuts;
    cin.ignore();
    cin>>a.seocnds;

    cout<<"enter time b ";
    cin>>b.hours;
    cin.ignore();
    cin>>b.minuts;
    cin.ignore();
    cin>>b.seocnds;
    swap(a,b);
    cout<<"swap "<<"time a = "<<a.hours<<":"<<a.minuts<<":"<<a.seocnds<<endl;
    cout<<"time b = "<<b.hours<<":"<<b.minuts<<":"<<b.seocnds<<endl;
    return 0;
}
