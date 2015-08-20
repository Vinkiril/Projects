#include <iostream>
using namespace std;
struct date
{
    int m,d,y;
};

enum etype {laborer,secretary,manager,accountant,executive,researcher};

struct employee
{
   int number;
   float dollars;
   etype post;
   date bd;
};

int main()
{   char ch,s;

    employee r1;
    cout<<"Введите номер, з/п, должность{loborer,secretary,manager,accountant},дату принятия на работу(dd/mm/yyyy): ";
    cin>>r1.number>>r1.dollars>>s>>r1.bd.d>>ch>>r1.bd.m>>ch>>r1.bd.y;;
    switch(s)
      {
    case 'l':
        {
            r1.post=laborer;
            break;
        }
    case 's':
        {
            r1.post=secretary;
            break;
        }
    case 'm':
        {
            r1.post=manager;
            break;
        }
    case 'a':
        {
            r1.post=accountant;
            break;
        }
    case 'e':
        {
            r1.post=executive;
            break;
        }
    case 'r':
        {
            r1.post=researcher;
            break;
        }
    default:
         cout << "Не корректный ввод";
      }
        cout<<r1.number<<' '<<r1.dollars<<' '<<s<<' '<<r1.bd.d<<'/'<<r1.bd.m<<'/'<<r1.bd.y;
    return 0;
}
