#ifndef SPHERE_H
#define SPHERE_H

#include "Shape.h"
#include <cmath>

class Sphere : public Shape {
private:
    double r;
public:
    Sphere(double r);
    double volume() const override;
    void show() const override;
};

#endif // SPHERE_H
