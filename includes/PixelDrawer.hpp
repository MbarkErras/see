#ifndef PIXELDRAWER_H
#define PIXELDRAWER_H

class PixelDrawer
{
public:
    virtual int start(int w, int h, char *title) = 0;
    virtual void stop() = 0;
};

#endif