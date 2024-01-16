#include <iostream>
using namespace std;
void HowManyStickers(int lenght)
{
    int result=(lenght*lenght)*6;
    cout<<"Number of stickers needed: "<<result;
}
int main()
{
    int lenght;
    cout<<"Enter the side lenght of rubic cube: ";
    cin>>lenght;
    HowManyStickers(lenght);
    return 0;
}