#include "Renderer.hpp"

Renderer::Renderer(Camera *camera)
{
    cameras.push_back(camera);
}

void Renderer::add_shape(Shape *shape)
{
    objects.push_back(shape);
}

void Renderer::render()
{
}