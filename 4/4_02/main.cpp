#include <iostream>
using namespace std;

struct point{
    int x;
    int y;
};

int main()
{
    point p1,p2,p3;
    cout<<"Введите координаты точки p1 ";
    cin>>p1.x>>p1.y;
    cout<<"Введите координаты точки p2 ";
    cin>>p2.x>>p2.y;
    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;
    cout<<"Координаты p1+p2 = "<<p3.x<<' '<<p3.y<<endl;
    return 0;
}