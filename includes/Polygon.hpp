#ifndef POLYGON_H
#define POLYGON_H

#include <vector>

class Polygon
{
public:
    Polygon();
    bool intersect(std::vector<int> ray);

private:
    size_t sides_count;
    std::vector<std::vector<int>> edges;
};

#endif