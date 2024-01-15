#include <iostream>
using namespace std;
int main()
{
    int personAge,numberMove,averageLiving;
    cout << "Enter the age of a person: ";
    cin >> personAge;
    cout<<"Enter number of times they moved: ";
    cin>>numberMove;
    averageLiving=personAge/(numberMove+1);
    cout<<"Average number of living in same house is: "<<averageLiving;
    return 0;
}