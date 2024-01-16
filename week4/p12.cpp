#include <iostream>
using namespace std;
void pet(int holidays)
{
    int workingDay = 365 - holidays;
    int gameTime = workingDay * 63 + holidays * 127;
    int normDifference = 30000 - gameTime;
    int hours, minutes;
    hours = normDifference / 60;
    minutes = normDifference % 60;
    if (normDifference >= 0)
    {
        cout << "Tom sleeps well\n";
        cout << hours << " hours " << minutes << " minutes are less for play";
    }
    if(normDifference<0)
    {
        cout<<"Tom will run away"<<endl;
        hours*=-1;
        minutes*=-1;
        cout << hours << " hours " << minutes << " minutes for play";
    }
}
int main()
{
    int holidays;
    cout << "Enter holidays: ";
    cin >> holidays;
    pet(holidays);
    return 0;
}