#include <iostream>
using namespace std;

struct Money
{
    int dollars;
    int cents;
};

void EnterMoney(Money& d)
{
   cout<<"Enter doolars: ";
   cin>>d.dollars;
   cout<<"Enter cents: ";
   cin>>d.cents;
}

Money Summ(Money x, Money y)
{
    Money z;
    z.dollars=x.dollars+y.dollars;
    z.cents=x.cents+y.cents;
    if (z.cents>100)
    {
        z.dollars++;
        z.cents=z.cents-100;
    }
    return z;
}


void OutMoney(Money& d)
{
    cout<<"$ = "<<d.dollars<<"."<<d.cents<<endl;
}

int main()
{  Money dollar1,dollar2,dollar3;
    EnterMoney(dollar1);
    EnterMoney(dollar2);
    dollar3=Summ(dollar1,dollar2);
    OutMoney(dollar3);


    return 0;
}
