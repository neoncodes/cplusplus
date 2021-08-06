#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
using namespace std;


int main(){   
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2);

    while(1){
        char key_press;
        int ascii_value;

        key_press = getch();
        ascii_value = key_press;

        SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2);

        if(ascii_value == 27){
            SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) -1);
            return 0;
        }
    }
}