#ifndef PYRAMID_H
#define PYRAMID_H

#include "Shape.h"

class Pyramid : public Shape {
private:
    double a, b, h;
public:
    Pyramid(double a, double b, double h);
    double volume() const override;
    void show() const override;
};

#endif // PYRAMID_H
