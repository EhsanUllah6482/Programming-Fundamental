#include <iostream>
using namespace std;
int main()
{
    int sidesofPolygon,angle;
    cout << "Enter the number of sides of polygon: ";
    cin >> sidesofPolygon;
    angle=(sidesofPolygon-2)*180;
    cout<<"The sum of internal angles is: "<<angle;
    
    return 0;
}