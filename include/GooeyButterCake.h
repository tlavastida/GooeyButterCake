/*
    GooeyButterCake.h  

    Declaration of the main class, GooeyButterCake.
    Should contain/point to all the necessary
    components for operating the emulator.
*/

#ifndef GOOEYBUTTERCAKE_H
#define GOOEYBUTTERCAKE_H

#include "Display.h"

class GooeyButterCake
{
//Document public members first
public:
    // Public Memeber functions

    // Constructor/Desctructor
    GooeyButterCake();
    ~GooeyButterCake();

    // Tentative interface
    int emulate();

private:
    // Private member functions

    // Loads ROM from XXX
    int loadROM(char* pathToROM);

    // Pulls the next instruction from XXX?
    int getInst();

    // Private data

    // instance of SDL wrapper class
    Display display;
};

#endif