#include <iostream>
using namespace std;

class Date
{
private:
    int month,day,year;
public:
    Date(){
        month=0;
        day=0;
        year=0;
    }
    void setdate(){
        char ch;
        cout<<"Ввеите дату приёма на работу(DD/MM/YYYY): ";
        cin>>month;
        cin>>ch;
        cin>>day;
        cin>>ch;
        cin>>year;
    }
    void getdate(){
        char ch='/';
        cout<<"Дата приёма на работу: ";
        cout<<month;
        cout<<ch;
        cout<<day;
        cout<<ch;
        cout<<year<<endl;
    }
};

class Employee
{
private:
   int number;
   float dollars;
   enum etype {laborer,secretary,manager,accountant,executive,researcher};
   etype w1;
   Date date1;
public:
   Employee(){
       number=0;
       dollars=0;
   }
   void getEmployeel(){
       cout<<number<<" $="<<dollars<<endl;
       date1.getdate();
       switch(w1)
       {
           case 0:
           {
               cout<<"loborer\n";
               break;
           }

           case 1:
           {
               cout<<"secretary\n";
               break;
           }
           case 2:
           {
               cout<<"manager\n";
               break;
           }
           case 3:
           {
               cout<<"accountant\n";
               break;
           }
           case 4:
           {
               cout<<"executive\n";
               break;
           }
           case 5:
           {
               cout<<"researcher\n";
               break;
           }
       }


   }
   void setEmployee(){
       cout<<"Введите номер сотрудника и его оклад: \n";
       cin>>number;
       cin>>dollars;
       date1.setdate();
       char ch;
       cout<<"Введите первую букву профессии:"<<endl;
       cout<<"loborer,secretary,manager,accountant,executive,researcher\n";
       cin>>ch;
       switch(ch)
       {
           case 'l':
           {
               w1=laborer;
               //cout<<"loborer\n";
               break;
           }

           case 's':
           {
               w1=secretary;
               //cout<<"secretary\n";
               break;
           }
           case'm':
           {
               w1=manager;
               //cout<<"manager\n";
               break;
           }
           case'a':
           {
               w1=accountant;
               //cout<<"accountant\n";
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
               //cout<<"researcher";
               break;
           }
       }
   }
};

int main()
{
    Employee e;
    e.setEmployee();
    e.getEmployeel();
    return 0;
}
