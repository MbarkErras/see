#ifndef RENDERER_H
#define RENDERER_H

#include <vector>
#include <Camera.hpp>
#include <Shape.hpp>

class Renderer
{
public:
    Renderer(Camera *);
    void add_shape(Shape *);
    void add_camera(Camera *);
    void render();

private:
    int renderer_interaface;
    std::vector<Camera *> cameras;
    std::vector<Shape *> objects;
};

#endif