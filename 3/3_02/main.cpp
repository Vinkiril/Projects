#include <iostream>
using namespace std;

int main()
{
    int i;
    float f,c;
   cout<<"Нажмите 1 для перевода шкалы Цельсия в шкалу Фарингейта."<<endl;
   cout<<"2 для перевода шкалы Фаренгейта в шкалу Цельсия: ";
   cin>>i;
   if(i==1)
   {
       cout<<"Введите температуру по Фарингейту: ";
       cin>>f;
       c=(f-32.0)*(5.0/9.0);
       cout<<"Значение по Цельсию: "<<c<<endl;
   }
   else
   {
       cout<<"Введите температуру по Цельсию: ";
       cin>>c;
       f=c*9/5+32;
       cout<<"Значение по Фарингейту"<<f<<endl;
   }
   return 0;
}
