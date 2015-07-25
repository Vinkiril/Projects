#include <iostream>
using namespace std;

int main()
{   float n,proc,sum;
    int years;
    cout<<"Введите начальный вклад: ";
    cin>>n;
    cout<<"Введите процентную ставку ";
    cin>>proc;
    cout<<"Нужная сумма ";
    cin>>sum;
    proc=proc*0.01;
    while (sum>n)
    {
        n=n+(n*proc);
        years++;
    }

    cout<<"Вам потребуется "<<years<<" лет"<<endl;
    return 0;
}
