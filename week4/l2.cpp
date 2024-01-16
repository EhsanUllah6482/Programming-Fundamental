#include <iostream>
using namespace std;
void inchestoFeet(float inches)
{
    float result=inches/12.00;
    cout<<"Equivalent in feet is: "<<result;

}
int main()
{
    cout<<"Enter measurement in inches: ";
    float inches;
    cin>>inches;
    inchestoFeet(inches);
    return 0;
}