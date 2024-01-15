#include <iostream>
using namespace std;
int main()
{
    float ImposterCount,PlayerCount,chanceofBeingImposter;
    cout << "Enter Imposter count: ";
    cin >> ImposterCount;
    cout<<"Enter Player count: ";
    cin>>PlayerCount;
    chanceofBeingImposter=100.00*(ImposterCount/PlayerCount);
    cout<<"Chance of being imposter: "<<chanceofBeingImposter<<"%";
    return 0;
}