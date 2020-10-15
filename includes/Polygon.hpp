#ifndef POLYGON_H
#define POLYGON_H

#include <vector>

#include "mathematics.hpp"

class Polygon
{
public:
    Polygon();
    bool intersect(Vector ray){};

private:
    size_t sides_count;
    std::vector<Vector> edges;
};

#endif