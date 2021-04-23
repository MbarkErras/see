#ifndef OBJECT_H
#define OBJECT_H

#include <vector>

class Object
{
public:
    virtual int intersect(float[3], float[3]) = 0;
};

#endif