/*
    Display.h  

    Declaration of class for handling
    graphics/display

    Main library is SDL2
*/


#ifndef DISPLAY_H
#define DISPLAY_H

// main include for SDL library
#include <SDL2/SDL.h>


class Display
{
public:
    // constructor/destructor
    Display();
    ~Display();

    int show();

private: 

    const char* TITLE = "GooeyButterCake";
    const int XPOS = SDL_WINDOWPOS_UNDEFINED;
    const int YPOS = SDL_WINDOWPOS_UNDEFINED;

    // default game boy resolution
    const int DISPLAY_WIDTH = 160;
    const int DISPLAY_HEIGHT = 144;

    // Window variable
    SDL_Window* window;

    // Surface contained in the window
    SDL_Surface* displaySurface;


};


#endif