#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{

    BOOL b_dir;
    b_dir = MoveFile("./anime_old.txt","./dastination/anime_new.txt");
//can be rename and move file

    system("PAUSE");
    return 0;

}