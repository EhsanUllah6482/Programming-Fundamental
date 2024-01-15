#include <iostream>
using namespace std;
int main()
{
    string name;
    int weighttoLoose,requiredDays;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter weight you want to loose: ";
    cin>>weighttoLoose;
    requiredDays=15*weighttoLoose;
    cout<<requiredDays<<" are required to loose "<<weighttoLoose<<" weight";
    return 0;
}