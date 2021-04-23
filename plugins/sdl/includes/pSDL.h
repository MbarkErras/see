#ifndef PSDL_H
#define PSDL_H

#include "PixelDrawer.hpp"
#include <SDL2/SDL.h>

class PSDL : public PixelDrawer
{
public:
    PSDL(int , int , const char *&, int &);
    int start();
    void stop();
    int getWidth();
    int getHeight();
    int drawPixel(int , int , int);
    void render();

private:
    SDL_Window *window;
    SDL_Renderer *renderer;
    int error = 0;
    uint16_t width;
    uint16_t height;
    const char *title;
};

#endif