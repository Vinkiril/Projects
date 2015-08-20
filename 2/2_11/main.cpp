#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << setiosflags(ios::left) <<setw(15) << "Фамилия"<< setw(12)<< "Имя"<<setw(18) << "Адрес"<<setw(15)<< "Город"<<endl
                                   <<setfill('.')<<setw(50)<<"."<<endl<<setfill(' ')
                                   <<setw(14)<< "Петров"<<setw(16)<<"Василий"<<setw(21)<<"Кленовая 16"<<setw(30)<<"Санкт-Петербург"<<endl
                                   <<setw(14)<< "Иванов"<<setw(15)<<"Сергей"<<setw(21)<<"Осиновая 3"<<setw(20)<<"Находка"<<endl
                                   <<setw(15)<< "Сидоров"<<setw(13)<<"Иван"<<setw(22)<<"Березовая 21"<<setw(25)<<"Калининград"<<endl;
    return 0;
}
