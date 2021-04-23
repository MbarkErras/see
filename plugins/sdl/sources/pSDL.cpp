#include "pSDL.h"

PSDL::PSDL(int _width, int _height, const char *&_title, int &_error) {
    error = SDL_Init(SDL_INIT_EVERYTHING);
    if (error) {
        _error = error;
        return ;
    }
    
    error = SDL_CreateWindowAndRenderer(_width, _height, 0, &window, &renderer);
    if (error) {
        _error = 1;
        return ;
    }

    width = _width;
    height = _height;
    _error = 0;
}

int PSDL::start()
{
}

void PSDL::stop()
{
    SDL_DestroyWindow( window );
    SDL_Quit();
}

int PSDL::getHeight() {
    return height;
}

int PSDL::getWidth() {
    return width;
}

int PSDL::drawPixel(int x, int y, int color) {
    // SDL_SetRenderDrawColor(renderer, color >> 24 && 0xFF, color >> 16 && 0xFF, color >> 8 && 0xFF, color && 0xFF);
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderDrawPoint(renderer, x, y);
}

void PSDL::render() {
    SDL_RenderPresent(renderer);
}