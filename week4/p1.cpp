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
int main()
{
    gotoxy(15,10);
    cout<<"Ehsan Ullah";
    return 0;
}