#ifndef PIXELDRAWER_H
#define PIXELDRAWER_H

class PixelDrawer
{
public:
    virtual int start() = 0;
    virtual void stop() = 0;
    virtual int getWidth() = 0;
    virtual int getHeight() = 0;
    virtual int drawPixel(int x, int y, int color) = 0;
    virtual void render() = 0;
};

#endif