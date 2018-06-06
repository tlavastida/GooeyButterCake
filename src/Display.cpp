/*
    Display.cpp

    Implementation of class for handling
    graphics/display

    Main library is SDL2
*/

#include "Display.h"
#include <iostream>

Display::Display()
{
    // Constructor
    window = NULL;
    displaySurface = NULL;

    // intialize SDL
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        std::cout << "SDL did not initialize! ";
        std::cout << "SDL error: " << SDL_GetError() << std::endl;
    }
    else 
    {
        // set up window and surface
        window = SDL_CreateWindow(TITLE,XPOS,YPOS,DISPLAY_WIDTH,DISPLAY_HEIGHT,
                                    SDL_WINDOW_SHOWN);
        if (window == NULL)
        {
            std::cout << "Window not created! ";
            std::cout << "SDL error: " << SDL_GetError() << std::endl;
        }
        else
        {
            displaySurface = SDL_GetWindowSurface(window);

        }
    }

    // If all succeeded, should be able to update
    // displaySurface and then call SDL_UpdateWindowSurface()
    // to draw to the window
}

Display::~Display()
{
    // Destructor

    // Free resources and close SDL
    SDL_DestroyWindow(window);
    SDL_Quit();
}

int Display::show()
{
    // main display method that draws to the window
    // returns a status code
    // 0 == everythings good
    // not 0 == bad

    if ( window == NULL || displaySurface == NULL )
    {
        // Important variable is NULL, abort
        return 1;
    }

    // variable for color
    // last three arguments is RGB Hex code
    Uint32 color = SDL_MapRGB(displaySurface->format,0x00,0x70,0xFF);

    // For now draw a solid color to the screen
    SDL_FillRect(displaySurface,NULL,color);
    SDL_UpdateWindowSurface(window);

    // wait 3000 ms
    SDL_Delay(3000);

    return 0;
}