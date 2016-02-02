#include <iostream>

using namespace std;

class Fraction
{
private:
    int x;
    int y;
public:

    void setFraction()
    {
        char ch;
        cout<<"введите дробь: "<<endl;
        cin>>x;
        cin>>ch;
        cin>>y;
    }
    void getFraction()
    {
        cout<<x<<"/"<<y<<endl;

    }
    void add(Fraction element)
    {
        cout<<"Сумма = ";
        x=x+element.x;
        y=y+element.y;
    }
};

int main()
{   char ans;
    Fraction a;
    Fraction b;
    do{
        a.setFraction();
        b.setFraction();
        a.add(b);
        a.getFraction();
        cout<<"again(y/n): ";
        cin>>ans;
    }while(ans=='y');
    return 0;
}

