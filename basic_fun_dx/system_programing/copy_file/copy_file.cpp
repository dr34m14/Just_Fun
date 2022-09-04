#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{

    BOOL b_dir;
    b_dir = CopyFile("./dir_for_copy/anime.txt","./ninja.txt", FALSE);
    //true -- if new file not exit
    //flase -- if new file exit and overwrite it
    if(b_dir==0){
cout<<GetLastError()<<endl;
    }
    cout<<"succuse copy"<<endl;

    system("PAUSE");
    return 0;
}