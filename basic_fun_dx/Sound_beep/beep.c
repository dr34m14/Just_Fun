#include <stdio.h>

#include <windows.h>
#define D0 146.8
#define G0 196
#define B0 246.9
#define E0 329.6
#define B1 261.6
#define E2 370
#define D2 164.8
#define G2 220
#define B3 293.6
#define D4 185
#define G3 233.1

int main()
{
    // Hz 37 to 32767
    // Beep(500, 500);
    // Beep(1000, 1000);
    // Beep(50, 500);

    Beep(D0, 333);
    Beep(G0, 500);
    Beep(G0, 500);
    Beep(B0, 250);
    Beep(E0, 500);
    Beep(B0, 250);
    Beep(B3, 1000);

    Beep(B3, 333);
    Beep(E0, 500);
    Beep(B3, 500);
    Beep(B0, 250);
    Beep(B1, 500);
    Beep(B0, 250);
    Beep(G2, 1000);

    Beep(D0, 333);
    Beep(G2, 500);
    Beep(G2, 500);
    Beep(B1, 250);
    Beep(E2, 500);
    Beep(E2, 500);
    Beep(E0, 1000);

    Beep(B3, 333);
    Beep(B1, 500);
    Beep(B1, 500);
    Beep(B0, 250);
    Beep(D2, 500);
    Beep(D4, 250);
    Beep(G0, 1000);
    Beep(G2, 3000);

    system("PAUSE");
    return 0;
}