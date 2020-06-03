#include <iostream>
#include <windows.h>

int main(int, char**) {
    int pid;
    std::cout<<"请输入您的进程pid";
    std::cin>>pid;
    byte buffer[] ={0x90,0x90,0x90,0x90,0x90,0x90};
    HANDLE h = OpenProcess(PROCESS_ALL_ACCESS,true,15792);
    WriteProcessMemory(h,(LPVOID)0x004010FD,buffer,6,NULL);
}
