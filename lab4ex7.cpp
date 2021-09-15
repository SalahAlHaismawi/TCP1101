//Salah Fayeq Y Alhaismawi
#include <iostream>
using namespace std;

int main()
{
    char ch,ch1;
    double bill=0;
    cout<<"Please input 'I' if you are in-state or 'O' if you are out-of-state:\n";
    cin>>ch;
    cout<<"Please input 'Y' if you require room and board and 'N' if you do not:\n";
    cin>>ch1;

    if(ch == 'I')
    {
        if(ch1 == 'Y')
        bill=3000+2500;
        else if(ch1 == 'N')
        bill=3000;

    }
    else if(ch == 'O')
    {
        if(ch1 == 'Y')
        bill=4500+3500;
        else if(ch1 == 'N')
        bill=4500;

    }
    cout<<"Your total bill for this semsester is $"<<bill<<endl;
 

    return 0;
}