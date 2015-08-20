#include <iostream>
using namespace std;
int main()
{
    float decp,decsh,decc;
    int p,sh,c;
    float decfrac;
    cout<<"Введите число десятичных фунтов";
    cin>>decp;
    p = static_cast<int>(decp);
    decfrac=decp-p;
    decsh=decfrac*20;
    sh=static_cast<int>(decsh);
    decc=decsh-sh;
    c=decc*12;
    cout<<"Эквивалентная сумма в старой форме: "<<p<<'.'<<sh<<'.'<<c<<endl;
    return 0;
}
