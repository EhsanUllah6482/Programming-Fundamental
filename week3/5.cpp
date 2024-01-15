#include <iostream>
using namespace std;
int main()
{
    float current,time,charge;
    cout<<"Enter the time elapsed(in hours): ";
    cin>>time;
    cout<<"Enter charge: ";
    cin>>charge;
    current=charge/time;
    cout<<"The current is: "<<current;
    return 0;
}