#include <iostream>
using namespace std;
int main()
{
    int numberofFrames,numberofMinutes,framesPerSecond;
    cout<<"Enter the total number of frames: ";
    cin>>numberofFrames;
    cout<<"Enter number of minutes: ";
    cin>>numberofMinutes;
    framesPerSecond=numberofFrames*numberofMinutes*60;
    cout<<"\nNumber of Frames per second is : " <<framesPerSecond ;
    
    return 0;
}