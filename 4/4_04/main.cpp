#include <iostream>
using namespace std;

struct employee
{
   int number;
   float dollars;
};

int main()
{
    employee s1,s2,s3;
    cout<<"Введите номер сотрудника и его оклад: \n";
    cin>>s1.number>>s1.dollars;
    cin>>s2.number>>s2.dollars;
    cin>>s3.number>>s3.dollars;
    cout<<"Вывод: \n"<<s1.number<<' '<<s1.dollars<<endl;
    cout<<s2.number<<' '<<s2.dollars<<endl;
    cout<<s3.number<<' '<<s3.dollars<<endl;
    return 0;
}
