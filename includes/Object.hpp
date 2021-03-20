#ifndef OBJECT_H
#define OBJECT_H

#include <vector>

#include "Polygon.hpp"

class Object
{
public:
    Object(std::vector<Polygon>);
    void dissect(size_t);
    bool intersect(std::vector<int>);

private:
    std::vector<Polygon> polygons;
};

#endif