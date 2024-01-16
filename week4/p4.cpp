#include <iostream>
#include <Windows.h>
using namespace std;
void gotoxy(int x, int y)
{
   COORD coordinates;
   coordinates.X = x;
   coordinates.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void header()
{
    cout << "*****************************************************************\n";
    cout << "*                    UAMS                                       *\n";
    cout << "*****************************************************************\n";
}
void calculateAggregate(string name, float matricMarks, float interMarks, float ecatMarks)
{
    float aggreagte = (matricMarks / 1100.0 * 30.0) + (interMarks / 550.0 * 30.0) + (ecatMarks / 400.0 * 40.0);
    cout << "\nName : " << name << endl;
    cout << "Your Aggregate Marks is: " << aggreagte << endl;
}
void compareMarks(string nameStd1, float ecatMarks1, string namestd2, float ecatMarks2)
{
    if (ecatMarks1 > ecatMarks2)
    {
        cout << nameStd1 << " roll number is: 1";
        cout<<endl;
    }
    if (ecatMarks1 < ecatMarks2)
    {
        cout << nameStd1 << " roll number is: 2";
        cout<<endl;
    }
    if (ecatMarks2 < ecatMarks1)
    {
        cout << namestd2 << " roll number is: 2";
        cout<<endl;
    }
    if (ecatMarks2 > ecatMarks1)
    {
        cout << namestd2 << " roll number is: 1";
        cout<<endl;
    }
}
void menue()
{
    header();
    cout << "Enter your name: ";
    string s1, s2;
    cin >> s1;
    cout << "ENter matric marks: ";
    float m1, i1, e1, m2, i2, e2;
    cin >> m1;
    cout << "Enter inter marks: ";
    cin >> i1;
    cout << "Enter ecat marks: ";
    cin >> e1;
    calculateAggregate(s1,m1,i1,e1);
    cout << "Enter your name: ";
    cin >> s2;
    cout << "ENter matric marks: ";
    cin >> m2;
    cout << "Enter inter marks: ";
    cin >> i2;
    cout << "Enter ecat marks: ";
    cin >> e2;
    calculateAggregate(s2,m2,i2,e2);
    compareMarks(s1,e1,s2,e2);
}

int main()
{
    
    menue();
    return 0;
}