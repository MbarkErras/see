#ifndef PSDL_H
#define PSDL_H

#include "PixelDrawer.hpp"
#include <SDL2/SDL.h>

class PSDL : public PixelDrawer
{
public:
    PSDL();
    int start(int w, int h, char *title);
    void stop();

private:
    SDL_Window *window;
    int error;
};

#endif