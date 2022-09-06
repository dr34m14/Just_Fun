#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{

    BOOL b_file;

//0x0 for file
//0x1 for folder
// 2nd peramitar is targect file
    b_file = CreateSymbolicLink("./link.txt","./anime.txt",0x0);
    

    

    system("PAUSE");
    return 0;
}