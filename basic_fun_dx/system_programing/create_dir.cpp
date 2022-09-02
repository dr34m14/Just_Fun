#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{

    BOOL b_dir;
    b_dir = CreateDirectory("C:\\Users\\Shopno\\Desktop\\anime", NULL);

    if (b_dir == FALSE)
    {
        cout << "create fail" << GetLastError() << endl;
    }
    cout << "create succesfully" << endl;
    Sleep(5000);
    b_dir=RemoveDirectory("C:\\Users\\Shopno\\Desktop\\anime");
    if (b_dir == FALSE)
    {
        cout << "delete fail" << GetLastError() << endl;
    }
    system("PAUSE");
        // system("cls"); //same work clrsc()
    return 0;
}