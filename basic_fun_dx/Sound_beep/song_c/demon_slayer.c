#include <stdio.h>
#include <Windows.h>

#define C3 130.81
#define D3 146.83
#define E3 164.81
#define F3 174.61
#define G3 196
#define A3 220
#define B3 246.94
#define C4 261.63
#define D4 293.665
#define E4 329.628
#define F4 349.23
#define G4 391.995
#define A4 440
#define B4 493.883
#define C5 523.251
#define D5 587.330
#define E5 659.255
#define F5 698.46
#define G5 783.991
#define A5 880
#define B5 987.767

#define CS3 138.59
#define DS3 155.56
#define FS3 185
#define GS3 207.65
#define AS3 233.08

#define CS4 277.18
#define DS4 311.13
#define FS4 369.99
#define GS4 415.30
#define AS4 466.16

#define CS5 554.37
#define DS5 622.25
#define FS5 739.99
#define GS5 830.61
#define AS5 932.33
int main()
{
    Beep(C4, 300);

    Beep(B3, 300);
    Beep(C4, 1000);
    Beep(E4, 1000);

    Beep(B3, 1000);
    Beep(A3, 1000);
    Beep(G3, 1000);

    Beep(A3, 1000);
    Beep(C4, 1000);
    Beep(E4, 1000);
    Beep(F4, 1000);
    Beep(E4, 1000);

    Beep(F4, 1000);

    Beep(A4, 1000);
    Beep(E4, 1000);


    return 0;
}