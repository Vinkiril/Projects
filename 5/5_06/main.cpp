#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int min;
    int sec;
};

long TimeToSecs(Time a)
{
    a.min = a.hours*60+a.min;
    a.sec=a.min*60+a.sec;
    return a.sec;
}

Time SecsToTime(long sec)
{
    Time time;
    int m,h;
    m =sec/60;
    h=m/60;
    time.hours=h;
    time.min=m - time.hours*60;
    time.sec =sec-(time.hours*3600)-(time.min*60);
    return time;
}

int main()
{
    Time time;
    cout<<"Enter time "<<endl;
    cin>>time.hours; //format HH:MM:SS
    cin.ignore();
    cin>>time.min;
    cin.ignore();
    cin>>time.sec;
    long i = TimeToSecs(time);
    cout<<"secs = "<<i<<endl;
    Time j=SecsToTime(i);
    cout<<"time format "<<j.hours<<":"<<j.min<<":"<<j.sec<<endl;
    return 0;
}
