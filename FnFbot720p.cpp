#include <windows.h>
#include<thread>
#include <iostream>
#include <tchar.h>
#include<fstream>
bool on = false;
void scan() {
    while (on) {
        COLORREF color;
        int red, green, blue;
        HDC hDC = GetDC(NULL);
        color = GetPixel(hDC, 725, 92);
        /*
       color = GetPixel(hDC, 1183, 109);
       */

        red = GetRValue(color);
        green = GetGValue(color);
        blue = GetBValue(color);
         // std::cout << "\n" << red << "\n" << green << "\n" << blue << "\n";
        if (red != 135 && green != 163 && blue != 173/*64*/) {

            INPUT ip;
            //255,210,212
             // Pause for 5 seconds.

             // Set up a generic keyboard event.
            ip.type = INPUT_KEYBOARD;
            ip.ki.wScan = 0; // hardware scan code for key
            ip.ki.time = 0;
            ip.ki.dwExtraInfo = 0;

            // Press the "A" key
            ip.ki.wVk = 0x25; // virtual-key code for the "a" key
            ip.ki.dwFlags = 0; // 0 for key press
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(10);
            ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(5);
        };
        color = GetPixel(hDC, 938,92);
        /*
       color = GetPixel(hDC, 1183, 109);
       */
        red = GetRValue(color);
        green = GetGValue(color);
        blue = GetBValue(color);
        //1089, 128
        //1262, 136

        if (red != 135 && green != 163 && blue != 173/*64*/) {

            INPUT ip;
            //255,210,212
             // Pause for 5 seconds.

             // Set up a generic keyboard event.
            ip.type = INPUT_KEYBOARD;
            ip.ki.wScan = 0; // hardware scan code for key
            ip.ki.time = 0;
            ip.ki.dwExtraInfo = 0;

            // Press the "A" key
            ip.ki.wVk = 0x26; // virtual-key code for the "a" key
            ip.ki.dwFlags = 0; // 0 for key press
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(10);
            ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(5);
        };
        color = GetPixel(hDC, 834, 92);
        /*
       color = GetPixel(hDC, 1183, 109);
       */
        red = GetRValue(color);
        green = GetGValue(color);
        blue = GetBValue(color);
        if (red != 135 && green != 163 && blue != 173/*64*/) {

            INPUT ip;
            //255,210,212
             // Pause for 5 seconds.

             // Set up a generic keyboard event.
            ip.type = INPUT_KEYBOARD;
            ip.ki.wScan = 0; // hardware scan code for key
            ip.ki.time = 0;
            ip.ki.dwExtraInfo = 0;

            // Press the "A" key
            ip.ki.wVk = 0x28; // virtual-key code for the "a" key
            ip.ki.dwFlags = 0; // 0 for key press
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(10);
            ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(5);
        };
        //FOURTH ONE EEIOOEEOEOEOEO
        color = GetPixel(hDC, 1053, 92);
        /*
       color = GetPixel(hDC, 1183, 109);
       */
        red = GetRValue(color);
        green = GetGValue(color);
        blue = GetBValue(color);
       //  std::cout << "\n" << red << "\n" << green << "\n" << blue << "\n";
        if (red != 135 && green != 163 && blue != 173/*64*/) {

            INPUT ip;
            //255,210,212
             // Pause for 5 seconds.

             // Set up a generic keyboard event.
            ip.type = INPUT_KEYBOARD;
            ip.ki.wScan = 0; // hardware scan code for key
            ip.ki.time = 0;
            ip.ki.dwExtraInfo = 0;

            // Press the "A" key
            ip.ki.wVk = 0x27; // virtual-key code for the "a" key
            ip.ki.dwFlags = 0; // 0 for key press
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(10);
            ip.ki.dwFlags = KEYEVENTF_KEYUP; // KEYEVENTF_KEYUP for key release
            SendInput(1, &ip, sizeof(INPUT));
            Sleep(5);
        };
        /* purple:
        1183
101
*/
        Sleep(1);
        ReleaseDC(NULL, hDC);
        if (GetAsyncKeyState(VK_INSERT) & 1)
        {
            std::cout << "toggled ";
            on = !on;
            if (on) {
                std::cout << "on\n";
                scan();
            }
            else {
                std::cout << "off\n";
            }
            Sleep(5);
        }
    }

}
int x;
int y;
using namespace std;
bool searchfortoggle = true;

int main()
{

    std::ifstream f("logo.txt");

    if (f.is_open())
        Sleep(500);
    std::cout << f.rdbuf() << "\n";
    Sleep(5000);
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n.";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << ".";
    Sleep(1000);
    cout << " FnFbot enabled, pres INSERT to toggle bot on/off\n(pro tip,only toggle WHEN THE HUD HAS FINISHED FADING IN.)\n";

    while (searchfortoggle) {
        if (GetAsyncKeyState(VK_INSERT) & 1)
        {
            std::cout << "toggled ";
            on = !on;
            if (on) {
                std::cout << "on\n";
                scan();
            }
            else {
                std::cout << "off\n";
            }
            Sleep(5);
        }
    }

}
