#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char ch;
    cout<<"Введите символ"<<endl;
    cin>>ch;
    cout<<islower(ch)<<endl;

    return 0;
}
