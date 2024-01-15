#include <iostream>
using namespace std;
int main()
{
    int mbs;
    cout<<"Enter the size in Mbs: ";
    cin>>mbs;
    float bits;
    bits = (mbs * 1024 * 8);
    cout<<"The size in bits is: "<<bits;
    return 0;
}