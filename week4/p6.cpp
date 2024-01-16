#include <iostream>
#include <Windows.h>
using namespace std;
void reverse(string prompt)
{
    if (prompt=="true")
    {
        cout<<"False";
        /* code */
    }
    if(prompt=="false")
    {
        cout<<"True";
    }
    
}
int main()
{
    string prompt;
    cout<<"Enter the boolean value to reverse it: ";
    cin>>prompt;
    reverse(prompt);
    return 0;
}