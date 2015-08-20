#include <iostream>
using namespace std;
const float f = 1.487;
const float fr=0.172;
const float m =0.584;
const float y =0.00955;
int main()
{   float d;
    cout<<"Введите доллары"<<endl;
    cin>>d;
    cout<<"фунт = "<<d*f<<endl
       <<"франк = "<<d*fr<<endl
      <<"марка = "<<d*m<<endl
     <<"йена = "<<d*y<<endl;
    return 0;
}
