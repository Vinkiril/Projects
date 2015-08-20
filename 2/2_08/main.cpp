#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout<<setw(9)<<"Город"<<setw(12)
       <<"Население"<<endl
      <<setfill('.')<<setw(9)<<"Москва"<<setw(12)<<2222<<endl
     <<setw(9)<<"Киров"<<setw(12)<<3333<<endl;

    return 0;
}
