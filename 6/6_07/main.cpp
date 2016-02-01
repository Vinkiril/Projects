#include <iostream>
#include <stdint.h>
using namespace std;

//ввод координат для морской навигации

class Angle
{
    private:
        uint16_t degree;
        float minuts;
        char direction;
    public:
        Angle(uint16_t d, float m, char dir):degree(d),minuts(m),direction(dir)
        {

        }
        void setAngle()
        {
            cout<<"Введите градусы"<<endl;
            cin>>degree;
            cout<<"Введите минуты"<<endl;
            cin>>minuts;
            cout<<"Введите направление(N, S, E, W)"<<endl;
            cin>>direction;

        }
        void getAngle()
        {
            cout<<degree<<"\xF8";
            cout<<minuts<<"'"<<" ";
            cout<<direction<<endl;
        }

};


int main()
{
    char ans='y';
    Angle angle(0,0.0,'W');
    angle.getAngle();
    while(ans=='y')
    {
        angle.setAngle();
        angle.getAngle();
        cout<<"again?(y/n): ";
        cin>>ans;
    }
    return 0;
}
