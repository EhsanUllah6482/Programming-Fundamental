#include <iostream>
using namespace std;
int main()
{
    int variable1,variable2;
    cout<<"Enter number 1: ";
    cin>>variable1;
    cout<<"Enter number 2: ";
    cin>>variable2;
    variable2=variable1+variable2;
    cout<<"Enter number 3: ";
    cin>>variable1;
    variable2=variable2+variable1;
    cout<<"Enter number 4: ";
    cin>>variable1;
    variable2=variable2+variable1;
    cout<<"Enter number 5: ";
    cin>>variable1;
    variable2=variable2+variable1;
    cout<<"The sum of entered five numbers is: "<<variable2;
    return 0;
}