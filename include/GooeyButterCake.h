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
    // Loads ROM from XXX
    int loadROM(char* pathToROM);
    // Pulls the next instruction from XXX?
    int getInst();
};

#endif