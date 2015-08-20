#include <iostream>
using namespace std;

struct steeling
{
    int pounds,shillings,peence;
};

int main()
{
    steeling m;
    double n,decfrac,decsh,decc;
    cout<<"Введите сумму в десятичной форме: ";
    cin>>n;
    m.pounds = static_cast<int>(n);
    decfrac=n-m.pounds;
    decsh=decfrac*20;
    m.shillings=static_cast<int>(decsh);
    decc=decsh-m.shillings;
    m.peence=decc*12;
    cout<<m.pounds<<endl<<m.shillings<<endl<<m.peence<<endl;
    return 0;
}
