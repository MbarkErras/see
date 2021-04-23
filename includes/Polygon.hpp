#ifndef POLYGON_H
#define POLYGON_H

#include <vector>
#include <array>
#include <numeric>

#include "Object.hpp"

class Polygon : public Object
{
public:
    Polygon(int faces_count, std::array<float, 3> *vertices, int face_vertices_count_map[], int face_vertices_order_map[]);
    int intersect(float[3], float[3]);
    void triangulate();

private:
    int faces_count;
    std::array<float, 3> *vertices;
    int *face_vertices_count_map;
    int *face_vertices_order_map;

    std::vector<std::array<int, 3>> triangles;
};

#endif