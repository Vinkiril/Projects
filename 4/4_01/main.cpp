#include <iostream>
using namespace std;
struct phone
{
    int code;
    int station;
    float number;
};

int main()
{
    phone n1,n2;
    n1={212,777,8900};
    cout<<"Введите код города, номер станции, номер абонента: ";
    cin>>n2.code>>n2.station>>n2.number;
    cout<<"Мой номер: "<<n1.code<<' '<<n1.station<<' '<<n1.number<<endl;
    cout<<"Ваш номер: "<<n2.code<<' '<<n2.station<<' '<<n2.number<<endl;

    return 0;
}
