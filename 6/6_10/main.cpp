#include <iostream>

using namespace std;

class Angle
{
    private:
        uint16_t degree_;
        float minuts_;
        char direction_;
    public:
        Angle(uint16_t degree, float minuts, char direction):degree_(degree),minuts_(minuts),direction_(direction)
        {

        }
        Angle()
        {

        }

        void setAngle()
        {
            cout<<"Введите градусы"<<endl;
            cin>>degree_;
            cout<<"Введите минуты"<<endl;
            cin>>minuts_;
            cout<<"Введите направление(N, S, E, W)"<<endl;
            cin>>direction_;

        }
        void getAngle()
        {
            cout<<degree_<<"\xF8";
            cout<<minuts_<<"'"<<" ";
            cout<<direction_<<endl;
        }

};

class Ship
{
private:
    static uint16_t number_;
    uint16_t shipNumber_;
    Angle coordinate1_;
    Angle coodrinate2_;


public:
    Ship()
    {
        number_++;
        shipNumber_=number_;
    }
    void setShip()
    {
        coordinate1_.setAngle();
        coodrinate2_.setAngle();
    }
    void getShip()
    {
        cout<<"№ "<<shipNumber_<<endl;
        coordinate1_.getAngle();
        coodrinate2_.getAngle();
    }

};
uint16_t Ship::number_=0;
int main()
{
    Ship ship;
    ship.setShip();
    ship.getShip();
    return 0;
}
