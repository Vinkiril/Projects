#include <iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};

Distance ZeroDistnce(Distance d1,Distance d2)
{
    if(d1.feet>d2.feet)
        return d1;
    else
        return d2;
}
void DisplayDistance(Distance d)
{
    cout<<"answer "<<d.feet<<"-"<<d.inches<<endl;
}

int main()
{
    Distance d1,d2;
    cout<<"Enter distance 1 feet ";
    cin>>d1.feet;
    cout<<"Enter distance 1 inches ";
    cin>>d1.inches;
    cout<<"Enter distance 2 feet ";
    cin>>d2.feet;
    cout<<"Enter distance 2 inches ";
    cin>>d2.inches;

    DisplayDistance(ZeroDistnce(d1,d2));
    return 0;
}
