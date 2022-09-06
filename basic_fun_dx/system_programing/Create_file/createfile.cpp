#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{

    HANDLE hFile;
    hFile = CreateFile("./anime_old.html", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);

    if (hFile == INVALID_HANDLE_VALUE)
    {
        cout << GetLastError() << endl;
    }
    cout << "creat succseflly" << endl;
    CloseHandle(hFile);
    system("PAUSE");
    return 0;
}