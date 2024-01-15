#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the weight in pounds...";
    int pounds;
    cin >> pounds;
    float kg = pounds * 0.45;
    cout << "The weight in Kgs is="<< kg << "kg"<<endl;
    return 0;
}