#include <iostream>
using namespace std;
void evenOrOdd(int number)
{
    if(number%2==0)
    {
        cout<<"Even";
    }
    if(number%2!=0)
    {
        cout<<"Odd";
    }
}
int main()
{
    cout<<"Enter a number: ";
    int number;
    cin>>number;
    evenOrOdd(number);
    return 0;
}