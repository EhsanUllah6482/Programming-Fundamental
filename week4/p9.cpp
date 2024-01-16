#include <iostream>
#include <Windows.h>
using namespace std;
void possibleBonue(int friend1,int friend2)
{
    int result;
    result=friend2-friend1;
    if(result>6)
    {
        cout<<"False";
    }
    if(result<=6)
    {
        cout<<"True";
    }
}
int main()
{
    int f1,f2;
    cout<<"Enter your position: ";
    cin>>f1;
    cout<<"Enter your friends position: ";
    cin>>f2;
    possibleBonue(f1,f2);
    return 0;
}