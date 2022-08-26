#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    while (true)

    {
        POINT post;
        GetCursorPos(&post);
        cout << "curent post:" << post.x << " " << post.y << endl;
      
        if(GetAsyncKeyState(0x51)){
            cout<<"Q:Quiting...";
            break;
        }
    }

    return 0;
}