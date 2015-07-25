#include <iostream>
using namespace std;

int main()
{
    int exit;
    unsigned int numb;
    unsigned long fact=1;
    cout<<"Введите целое число: ";
    cin>>numb;
    while(numb!=0)
    {

        for(int i=numb;i>0;i--)
        {
            fact*=i;
        }
        cout<<"Факториал числа равен: "<<fact<<endl;
        fact=1;
        cout<<"Введите целое число: ";
        cin>>numb;

    };
    return 0;
}
