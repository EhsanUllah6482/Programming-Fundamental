#include <iostream>
using namespace std;
int main()
{
    string team;
    int wins,draws,loses,result;
    cout << "Enter the name of the team: ";
    cin>>team;
    cout<<"Enter number of wins: ";
    cin >>wins;
    cout << "Enter number of draws: ";
    cin >> draws;
    cout << "Enter number of loses: ";
    cin >> loses;
    result=(wins*wins)+draws;
    cout<<"The total points are: "<<result;
    return 0;
}