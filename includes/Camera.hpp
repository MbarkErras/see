#ifndef CAMERA_H
#define CAMERA_H

#include <vector>

class Camera
{
public:
    Camera(std::vector<float> position, std::vector<float> lookat, std::vector<float> normal, double v_fov, double distance, double h_fov);

    std::vector<float> position;
    std::vector<float> lookat;
    std::vector<float> normal;
    std::vector<float> cross;
    double distance;
    double v_fov;
    double h_fov;
private:
};

#endif