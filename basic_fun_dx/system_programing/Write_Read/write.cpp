#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{

    HANDLE hFile;
    hFile = CreateFile("./anime_old.txt", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);

    BOOL b_file;
    char buff[] = "#dfsfd";
    DWORD dwNoByteToWrite = strlen(buff);
    DWORD dwNoByteToWritten = 0;

    b_file = WriteFile(hFile, buff, dwNoByteToWrite, &dwNoByteToWritten, NULL);

    BOOL b_file_read;
    char buff_read[25] ;
    DWORD dwNoByteToRead = strlen(buff);
    DWORD dwNoByteToReaden = 0;

    b_file_read = ReadFile(hFile, buff, dwNoByteToRead, &dwNoByteToReaden, NULL);
    cout << buff_read << endl;

    CloseHandle(hFile);

    system("PAUSE");
    return 0;
}