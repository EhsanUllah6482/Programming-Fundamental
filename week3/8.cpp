#include <iostream>
using namespace std;
int main()
{
    int hours;
    int seconds;
    cout << "Enter the number of hours: ";
    cin >> hours;
    seconds=hours*60*60;
    cout<<"The time in seconds is: "<<seconds;
    return 0;
}