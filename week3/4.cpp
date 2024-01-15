#include <iostream>
using namespace std;
int main()
{
    float lenght,width;
    cout<<"Enter the length of rectangle: ";
    cin>>lenght;
    cout<<"\nEnter the width of rectangle: ";
    cin>>width;

    float area=lenght*width;
    cout<<"The area of rectangle is="<<area;
    return 0;
}