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
void letter()
{
    cout << "------------------\n";
    cout << "|                 \n";
    cout << "|                 \n";
    cout << "|                 \n";
    cout << "------------------\n";
    cout << "|                 \n";
    cout << "|                 \n";
    cout << "|                 \n";
    cout << "------------------\n";
}
int main()
{
    gotoxy(0,0);
    letter();
    gotoxy(0,15);
    letter();
    gotoxy(0,30);
    letter();
    gotoxy(0,45);
    letter();

    return 0;
}