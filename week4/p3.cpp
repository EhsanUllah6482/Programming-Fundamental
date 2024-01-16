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
    Sleep(300);
    cout << " ";
}

int main()
{
    int x = 4, y = 5;
    system("cls");
    printMaze();
    while (true)
    {
        while (y >= 5 && y <= 11)
        {
            system("color 01");
            movePlayer(x, y);
            y = y + 1;
            if (y == 11)
            {
                break;
            }
        }
        if (y == 1)
        {
            while (y != 5)
            {

                y++;
                system("color 05");
                movePlayer(x, y);
            }
        }
        if (y == 11)
        {

            while (y != 1)
            {
                y--;
                system("color 03");
                movePlayer(x, y);
                if (y == 1)
                {
                    break;
                    ;
                }
            }
        }
    }
    gotoxy(0, 15);
    return 0;
}