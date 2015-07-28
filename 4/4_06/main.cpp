#include <iostream>
using namespace std;
enum etype {laborer,secretary,manager,accountant,executive,researcher};
int main()
{
    char ch;
    etype w1;
    cout<<"Введите первую букву "<<endl;
    cout<<"loborer,secretary,manager,accountant\n";
    cin>>ch;
    switch(ch)
    {
        case 'l':
        {
            w1=laborer;
            cout<<"loborer\n";
            break;
        }

        case 's':
        {
            w1=secretary;
            cout<<"secretary\n";
            break;
        }
        case'm':
        {
            w1=manager;
            cout<<"manager\n";
            break;
        }
        case'a':
        {
            w1=accountant;
            cout<<"accountant\n";
            break;
        }
        case 'e':
        {
            w1=executive;
            cout<<"executive";
            break;
        }
        case 'r':
        {
            w1=researcher;
            cout<<"researcher";
            break;
        }
    }

    return 0;
}
