#include "Renderer.hpp"

Renderer::Renderer(Camera *camera)
{
    cameras.push_back(camera);
}

void Renderer::add_object(Object *object)
{
    objects.push_back(object);
}

void Renderer::render()
{
}