#include <iostream>
#include <Windows.h>
using namespace std;
void checkSpeed(int speed)
{
    if(speed>100)
    {
        cout << "Halt… YOU WILL BE CHALLENGED!!!";
    }
    if(speed<=100)
    {
        cout << "Perfect! You're going good." ;
    }
}
int main()
{
    int speed;
    cout<<"Speed: ";
    cin>>speed;
    checkSpeed(speed);
    return 0;
}