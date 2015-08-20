#include <iostream>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};
struct Volume
{
    Distance x,y,z;
};


int main()
{
    float l,w,h;
    Volume v1;
    v1={{16,3.3},{12,6.0},{8,1.1}};
    l=v1.x.feet+v1.x.inches/12;
    w=v1.y.feet+v1.y.inches/12;
    h=v1.z.feet+v1.z.inches/12;
    cout<<"Объем = "<<l*w*h<<" кубических футов \n";
    return 0;
}
