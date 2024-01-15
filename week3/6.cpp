#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name: ";
    cin>>name;
    float matric,inter,ecat,aggregate,mp,ip,ep;
    cout<<"Enter your Matriculation Marks: ";
    cin >>matric;
    cout<<"Enter your Intermediate Marks: ";
    cin >>inter;
    cout<<"Enter your ecat Marks: ";
    cin >>ecat;
    mp=(matric/1100)*10;
    ip=(inter/550)*40;
    ep=(ecat/400)*50;
    aggregate=mp+ip+ep;
    cout<<"Aggregate of "<<name<<"is: "<<aggregate<<"%";




    return 0;
}