/*
    GooeyButterCake.h  

    Declaration of the main class, GooeyButterCake.
    Should contain/point to all the necessary
    components for operating the emulator.
*/


#ifndef GOOEYBUTTERCAKE_H
#define GOOEYBUTTERCAKE_H

class GooeyButterCake
{
//Document public members first
public:
    // Constructor/Desctructor
    GooeyButterCake();
    ~GooeyButterCake();

    // Tentative interface
    int emulate();

private:
    int loadROM(char* pathToROM);
};

#endif