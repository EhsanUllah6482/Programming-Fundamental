#include <iostream>
#include <Windows.h>
using namespace std;
void isEqual(int n1,int n2)
{
    if(n1==n2)
    {
        cout<<"True";
    }
    if(n1!=n2)
    {
        cout<<"False";
    }
}
int main()
{
    int n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2nd number: ";
    cin>>n2;
    isEqual(n1,n2);
    return 0;
}