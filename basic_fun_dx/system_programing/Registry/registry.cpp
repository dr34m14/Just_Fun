#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{

    // regustry keys
    //  HKEY_LOCAL_MACHINE
    // HKEY_USERS
    // HKEY_CURRENT_CONFIG
    // HKEY_CLASSES_ROOT
    // HKEY_CURRENT_USER

    LONG lReg;
    HKEY hkey;
    DWORD dwData = 1234;
    lReg = RegCreateKeyEx(
        HKEY_LOCAL_MACHINE,
        "Software\\Test\\Product\\SmartId",
        0,
        NULL,
        REG_OPTION_NON_VOLATILE,
        KEY_ALL_ACCESS,
        NULL,
        &hkey,
        NULL);
    lReg = RegSetValueEx(
        hkey,
        "VALUE",
        NULL,
        REG_DWORD,
        (LPBYTE)&dwData,
        sizeof(dwData));
    RegCloseKey(hkey);
    system("PAUSE");
    return 0;
}