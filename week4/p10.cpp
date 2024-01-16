#include <iostream>
#include <Windows.h>
using namespace std;
void longestTime(int hours,int minutes)
{
    int hourToMinutes=hours*60;
    if(hourToMinutes>minutes)
    {
        cout << hours << " Hours have more duration";
    }
    if(minutes>hourToMinutes)
    {
        cout << minutes << " Minutes have more duration";
    }
}
int main()
{
    int hour,minutes;
    cout<<"Enter hours: ";
    cin>>hour;
    cout<<"Enter minutes: ";
    cin>>minutes;
    longestTime(hour,minutes);
    return 0;
}