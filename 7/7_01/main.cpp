#include <iostream>
#include <cstring>
using namespace std;
const uint16_t MAX = 64;
void reversit(char str[])
{
    uint16_t m=0;
    m=strlen(str);
    char temp;
    for(uint16_t i =0;i<m/2;i++)
    {
        temp=str[i];
        str[i]=str[m-i-1];
        str[m-i-1]=temp;
    }
}

int main(void)
{
    char hell[MAX];
    cout<<"Введите строку"<<endl;
    cin.get(hell[MAX]);
    //char hell[n] ="Hello World!";
    cout<<hell<<endl;
    reversit(hell);
    cout<<hell<<endl;

}
