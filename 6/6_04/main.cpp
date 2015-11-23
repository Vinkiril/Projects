#include <iostream>
using namespace std;

class employee
{
private:
   int number;
   float dollars;
public:
   employee(){
       number=0;
       dollars=0;
   }
   void disp(){
       cout<<number<<" $="<<dollars<<endl;
   }
   void in(){
       cout<<"Введите номер сотрудника и его оклад: \n";
       cin>>number;
       cin>>dollars;
   }
};

int main(){
    employee s1,s2,s3;
        s1.in();
        s2.in();
        s3.in();
        cout<<"Вывод: \n";
        s1.disp();
        s2.disp();
        s3.disp();

    return 0;
}
