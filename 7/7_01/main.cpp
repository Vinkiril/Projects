#include <iostream>
#include <cstring>
using namespace std;
const uint16_t n = 16;
void reversit(char str[n])
{
    uint16_t n=0;
    n=strlen(str);
    char temp;
    for(uint16_t i =0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
}

int main(void)
{

    char hell[n] ="Hello World!";
    cout<<hell<<endl;
    reversit(hell);
    cout<<hell<<endl;

}
