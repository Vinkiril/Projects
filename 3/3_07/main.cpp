#include <iostream>
using namespace std;

int main()
{   float n,proc;
    int years;
    cout<<"Введите начальный вклад: ";
    cin>>n;
    cout<<"Введите число лет: ";
    cin>>years;
    cout<<"Введите процентную ставку ";
    cin>>proc;
    proc=proc*0.01;
    for(int i=0;i<years;i++)
    {

        n=n+(n*proc);
    }
    cout<<"Через "<<years<<" лет вы получите "<<n<<endl;
    return 0;
}
