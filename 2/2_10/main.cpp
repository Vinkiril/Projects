#include <iostream>
using namespace std;
int main()
{
    float a,b,c,f;
        cout << "Введите количество фунтов"<<endl;
        cin >> a;
        cout << "Введите количество шиллингов"<<endl;
        cin >> b;
        cout << "Введите количество пенсов"<<endl;
        cin >> c;
        f = a+(b+c/12)/20;
        cout << "Количество фунтов = " << f << endl;

    return 0;
}
