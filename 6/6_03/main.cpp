#include <iostream>
using namespace std;

class timen{
private:
    int h,m,s;
public:
    timen(){
        h=0;
        m=0;
        s=0;
    }
    timen(int a,int b, int c){
        h=a;
        m=b;
        s=c;
    }
    void disp(){
         cout<<h<<":"<<m<<":"<<s<<endl;
    }
    void add(timen t1,timen t2){
        h=t1.h+t2.h;
        m=t1.m+t2.m;
        if(m>=60){
           h++;
           m-=60;
        }
        s=t1.s+t2.s;
        if(s>=60)
        {
            m++;
            s-=60;
        }


     }
};

int main()
{
   timen t1(10,44,35);
   timen t2(10,25,36);
   timen t3;
    t3.add(t1,t2);
    t3.disp();

    return 0;
}
