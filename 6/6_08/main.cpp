#include <iostream>

using namespace std;

class SomeClass
{
private:
    static uint16_t number;
    uint16_t privateNumber;
public:
    SomeClass()
    {
        number++;
        privateNumber=number;

    }

    uint16_t getPrivateNumber()
    {
        return privateNumber;
    }


};

uint16_t SomeClass::number=0;
int main()
{
    SomeClass e1;
    SomeClass e2;
    SomeClass e3;
    cout<<e1.getPrivateNumber()<<endl;
    cout<<e2.getPrivateNumber()<<endl;
    cout<<e3.getPrivateNumber()<<endl;
    return 0;
}
