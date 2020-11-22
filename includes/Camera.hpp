#ifndef CAMERA_H
#define CAMERA_H

#include "mathematics.hpp"

class Camera
{
public:
    Camera(Vector<int> position, Vector<int> lookat, Vector<int> normal, double v_fov, double distance, double h_fov);

private:
    Vector<int> postion;
    Vector<int> lookat;
    Vector<int> normal;
    double distance;
    double v_fov;
    double h_fov;
};

#endif