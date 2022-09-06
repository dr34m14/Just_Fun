#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{

    BOOL b_file;


    b_file = CreateHardLink("./anime.txt","./zoro.txt",NULL);
    

    

    system("PAUSE");
    return 0;
}