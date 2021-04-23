#include "Camera.hpp"

Camera::Camera(float _position[3], float _lookat[3], float _normal[3], double _v_fov, double _distance, double _h_fov) : position(_position), lookat(_lookat), normal(_normal), v_fov(_v_fov), h_fov(_h_fov), distance(_distance)  
{
    float _cross[3] = {
        lookat[1] * normal[2] - lookat[2] * normal[1],
        -1 * (lookat[0] * normal[2] - lookat[2] * normal[0]),
        lookat[0] * normal[1] - lookat[1] * normal[0],
    };

    cross = _cross;
}