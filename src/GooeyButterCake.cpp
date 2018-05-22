//GooeyButterCake.cpp
//
//Implementation of the main class, GooeyButterCake


#include "GooeyButterCake.h"
#include <iostream>

GooeyButterCake::GooeyButterCake(){
    // Default constructor

    // nothing to do yet
}

GooeyButterCake::~GooeyButterCake(){
    // Default destructor

    // nothing to do yet
}

int GooeyButterCake::emulate(){
    // Tentative interface
    //
    // Return: ???

    std::cout << "Hello World" << std::endl;
    return 0;
}

int GooeyButterCake::loadROM(char* pathToROM){
    // Loads ROM from XXX
    //
    // char* pathtoROM: filepath to the ROM
    //
    // Return: ???

    //TODO
    return 0;
}

int GooeyButterCake::getInst(){
    // Pulls the next instruction from XXX?
    //
    // Return: next instruction byte (not decoded?)

    // TODO
    return 0;
}