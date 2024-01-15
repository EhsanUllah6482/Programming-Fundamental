#include <iostream>
using namespace std;
int main()
{
    float voltage,current,power;
    cout<<"Enter the value of Voltage: ";
    cin>>voltage;
    cout<<"Enter the value of Current: ";
    cin>>current;
    power=voltage*current;
    cout<<"\nThe Power is = "<<power<<" watts"<<endl;
    
    return 0;
}