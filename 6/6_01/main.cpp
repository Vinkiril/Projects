#include <iostream>
using namespace std;

class Int{
    int i;

public:
    Int(){
        i=0;
    }
    Int(int i1){
        i=i1;
    }

    void sum(Int i1,Int i2){
        i=i1.i+i2.i;

    }

    void disp(){
        cout<<i<<endl;
    }
};

int main()
{
    Int i1(4);
    Int i2(10);
    Int i3;
    i3.sum(i1,i2);
    i3.disp();
    return 0;
}
