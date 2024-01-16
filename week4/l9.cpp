#include <iostream>
using namespace std;
void calculateFuel(float distance)
{
    float result;
    result=distance*10;
    if(result>100)
    {
        cout<<"Fuel Needed: "<<result;
    }
    if(result<=100)
    {
        result=100;
        cout<<"Fuel needed: "<<result;
    }
}
int main()
{
    float distance;
    cout << "Enter the Distance: ";
    cin >> distance;
    calculateFuel(distance);
    return 0;
}