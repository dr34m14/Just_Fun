#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{
string s;
cout<<"Game started:Y/N"<<endl;
cin>>s;
if(s=="Y"){
   cout<<"Nice but game is not ready\n"; 
}else{
    cout<<"Ok,BYE!\n";
}

    system("PAUSE");
    return 0;
}