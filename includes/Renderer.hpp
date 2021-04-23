#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include <Camera.hpp>
#include <Object.hpp>
#include <PixelDrawer.hpp>

class Renderer
{
public:
    Renderer(Camera, PixelDrawer &_pixelDrawer);
    void add_object(Object &);
    void add_camera(Camera);
    void render();

private:
    std::vector<Camera> cameras;
    std::vector<Object *> objects;
    PixelDrawer &pixelDrawer;
};

#endif