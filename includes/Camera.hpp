#ifndef CAMERA_H
#define CAMERA_H

#include "mathematics.hpp"

class Camera
{
public:
    Camera(Vector position, Vector lookat, Vector normal, double v_fov, double distance, double h_fov);

private:
    Vector postion;
    Vector lookat;
    Vector normal;
    double distance;
    double v_fov;
    double h_fov;
};

#endif