#include <iostream>
using namespace std;
int main()
{
    int currentworldPopulation,monthlyBirthRate,AfterThreeDecades;
    cout << "Enter the world population: ";
    cin >> currentworldPopulation;
    cout << "\nEnter the monthly birth rate: ";
    cin >> monthlyBirthRate;
    AfterThreeDecades = (monthlyBirthRate*12)*30+currentworldPopulation;
    cout<<"\nThe estimated population after 3 decades will be :"<<AfterThreeDecades;
    
    return 0;
}