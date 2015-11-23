#include <iostream>
using namespace std;

class toolBooth{
private:
    unsigned int count;
    double money;
public:
    toolBooth(){
        count=0;
        money=0;
    }

    void payingCar(){
        count++;
        money+=0.5;
    }
    void noPayCar(){
        count++;
    }
    void disp(){
        cout<<"CARS: "<<count<<endl;
        cout<<"Money: "<<money<<endl;
    }
};

int main()
{
    toolBooth i;
    int x;
    do{
        cout<<"press 0 for car with pay"<<endl;
        cout<<"press 1 for car without pay"<<endl;
        cout<<"press 2 for exit"<<endl;
        cin>>x;
        if(x==0)
            i.payingCar();
        else
            i.noPayCar();
    }while (x!=2);
    i.disp();
    return 0;
}
