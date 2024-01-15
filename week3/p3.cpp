#include <iostream>
using namespace std;
int main()
{
    int initailVelcoity,finalVelocity,acceleration,time;
    cout<<"Enter the initial velocity: ";
    cin>>initailVelcoity;
    cout<<"Enter acceleration: ";
    cin>>acceleration;
    cout<<"Enter time: ";
    cin>>time;
    finalVelocity=acceleration*time+initailVelcoity;
    cout<<"\nThe Final Velocity is: "<<finalVelocity;
    return 0;
}