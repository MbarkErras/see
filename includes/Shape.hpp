#ifndef SHAPE_H
#define SHAPE_H

#include <vector>

#include "mathematics.hpp"
#include "Polygon.hpp"

class Shape
{
public:
    Shape();
    void dissect(size_t n);
    bool intersect(Vector<int> ray);

private:
    std::vector<Polygon> polygons;
};

#endif