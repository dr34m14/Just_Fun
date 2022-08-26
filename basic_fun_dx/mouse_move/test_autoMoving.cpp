#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x = 10, y = 10;

    while (x < 500 && y < 500)
    {
        SetCursorPos(x, y);
        x++;
        y++;
        Sleep(10);
    }
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    Sleep(100);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    cout << "succed" << endl;
    return 0;
}