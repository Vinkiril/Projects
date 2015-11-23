#include <iostream>
using namespace std;

class date
{
private:
    int month,day,year;
public:
    date(){
        month=0;
        day=0;
        year=0;
    }
    void getdate(){
        char ch;
        cout<<"Enter data: ";
        cin>>month;
        cin>>ch;
        cin>>day;
        cin>>ch;
        cin>>year;
    }
    void showdate(){
        char ch='/';
        cout<<"Data: ";
        cout<<month;
        cout<<ch;
        cout<<day;
        cout<<ch;
        cout<<year<<endl;
    }
};

int main()
{
    date d1,d2,d3;
    d1.getdate();
    d1.showdate();
    return 0;
}
