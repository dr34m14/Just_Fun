#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    while (true)

    {
        char g = getch();
        int x, y;
        POINT post;
        if (g == 'S' || g == 's')
        {
            cout << "new post:" << endl;
            cin >> x >> y;
            SetCursorPos(x, y);
        }
        else if (g == 'q' || g == 'Q')
        {
            break;
        }
          else if (g == 'i' || g == 'I')
        {
            GetCursorPos(&post);
            cout<<"curent post:"<<post.x<<" "<<post.y<<endl;
        }
    }

    return 0;
}