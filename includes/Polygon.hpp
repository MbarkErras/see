#ifndef POLYGON_H
#define POLYGON_H

#include <vector>

#include "mathematics.hpp"

class Polygon
{
public:
    Polygon();
    bool intersect(Vector<int> ray);

private:
    size_t sides_count;
    std::vector<Vector<int>> edges;
};

#endif