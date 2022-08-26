#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    while (1)
    {
        if(GetAsyncKeyState(0x01)){
            cout<<"left";
        }
    }
     mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    Sleep(100);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

    cout<<"\nsussec";
    return 0;
}