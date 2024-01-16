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

void printMaze()
{
    cout << "###############################" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "#                             #" << endl;
    cout << "###############################" << endl;
}

void movePlayer(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
    gotoxy(x, y);
    Sleep(500);
    cout << " ";
}

int main()
{
    int x = 4, y = 5;
    system("cls");
    printMaze();
    while (true)
    {
        movePlayer(x, y);
        x = x + 1;
        if(x==29)
        {
            x=4;
        }
    }
    gotoxy(0, 15);
    return 0;
}