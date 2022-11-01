#include <Windows.h>
#include <iostream>

using namespace std;
int main()
{
    HANDLE hprocess = NULL;
    HANDLE hThread = NULL;
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    DWORD dwprocessId = 0;
    DWORD dwThreadId = 0;
    ZeroMemory(&si, sizeof(si));
    ZeroMemory(&pi, sizeof(pi));
    BOOL bcreateProcess = NULL;
    bcreateProcess = CreateProcess(
        "E:\\Project\\basic_fun_dx\\system_programing\\Process\\game.exe",
        NULL, // null for no comand line
        NULL,
        NULL,
        FALSE,
        0,
        NULL,
        NULL,
        &si,
        &pi);
        if(bcreateProcess==FALSE)
        { 
            cout<<"create Process Failed & Erro No:"<<GetLastError()<<endl;
        }
    cout << "Process ID:" << pi.dwProcessId << endl;
    cout << "Thread ID:" << pi.dwThreadId << endl;
    cout << "Get Process ID:" << GetProcessId(pi.hProcess) << endl;
    cout << "Get Thread ID:" << GetThreadId(pi.hThread) << endl;
    WaitForSingleObject(pi.hProcess, INFINITE);
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
    system("PAUSE");
    return 0;
}