#include <iostream>
using namespace std;
int main()
{
    int numberSquare,wallWidth,WallHeight,wallPaint;
    cout<<"Enter number of squares you can paint: ";
    cin>>numberSquare;
    cout<<"\nEnter width of the wall in meters: ";
    cin>>wallWidth;
    cout<<"\nEnter height of the wall in meters: ";
    cin>>WallHeight;
    wallPaint=numberSquare/(wallWidth*WallHeight);
    cout<<"Number of walls you can paint is: "<<wallPaint;
    
    return 0;
}