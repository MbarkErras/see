#ifndef CAMERA_H
#define CAMERA_H

#include <vector>

class Camera
{
public:
    Camera(float position[3], float lookat[3], float normal[3], double v_fov, double distance, double h_fov);

    float *position;
    float *lookat;
    float *normal;
    float *cross;
    double distance;
    double v_fov;
    double h_fov;
private:
};

#endif