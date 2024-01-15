#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a four digit number: ";
    cin>>number;
    int r1,r2,r3,r4;
    r1=number%10;
    number/=10;
    r2=number%10;
    number/=10;
    r3=number%10;
    number/=10;
    r4=number%10;
    number/=10;
    int sum=r1+r2+r3+r4;
    cout<<"The sum of four digit number is: "<<sum;
    return 0;
}