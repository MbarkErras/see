#include "Renderer.hpp"
#include "stdio.h"

Renderer::Renderer(Camera camera, PixelDrawer &_pixelDrawer) : pixelDrawer(_pixelDrawer)
{
    cameras.push_back(camera);
}

void Renderer::add_object(Object &object)
{
    objects.push_back(&object);
}

void Renderer::render()
{
    Camera camera = cameras[0];

    for (int x = 0; x < pixelDrawer.getWidth(); x++)
    {
        for (int y = 0; y < pixelDrawer.getHeight(); y++)
        {
            float x_quotient = 2.0 * x / pixelDrawer.getWidth() - 1;
            float y_quotient = 2.0 * y / pixelDrawer.getHeight() - 1;
            float ray_direction[3] = {
                camera.lookat[0] + camera.normal[0] * y_quotient + camera.cross[0] * x_quotient,
                camera.lookat[1] + camera.normal[1] * y_quotient + camera.cross[1] * x_quotient,
                camera.lookat[2] + camera.normal[2] * y_quotient + camera.cross[2] * x_quotient,
            };
            printf("ray: (%f, %f, %f)\n", ray_direction[0], ray_direction[1], ray_direction[2]);
            pixelDrawer.drawPixel(x, y, __INT32_MAX__);
        }
    }

    pixelDrawer.render();
}