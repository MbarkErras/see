#include "Object.hpp"

Object::Object(std::vector<Polygon> _polygons) {
    polygons = _polygons;
}

void Object::dissect(size_t n) {}

bool Object::intersect(std::vector<int> ray) {}