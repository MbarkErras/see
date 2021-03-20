#ifndef CAMERA_H
#define CAMERA_H

#include <vector>

class Camera
{
public:
    Camera(std::vector<int> position, std::vector<int> lookat, std::vector<int> normal, double v_fov, double distance, double h_fov);

private:
    std::vector<int> postion;
    std::vector<int> lookat;
    std::vector<int> normal;
    double distance;
    double v_fov;
    double h_fov;
};

#endif