#include <iostream>
using namespace std;
void calculateFuel(float distance)
{
    float result=distance*10.00;
    cout<<"Fuel needed: "<<result;

}
int main()
{
    cout<<"Enter distance: ";
    float distance;
    cin>>distance;
    calculateFuel(distance);
    return 0;
}