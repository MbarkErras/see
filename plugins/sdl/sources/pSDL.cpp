#include "pSDL.h"

PSDL::PSDL() {
    error = SDL_Init(SDL_INIT_EVERYTHING);
}

int PSDL::start(int w, int h, char *title)
{
    if (error)
        return error;
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, 0);
}

void PSDL::stop()
{
    SDL_DestroyWindow( window );
    SDL_Quit();
}