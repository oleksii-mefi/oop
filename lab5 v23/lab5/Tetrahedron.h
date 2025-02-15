#ifndef TETRAHEDRON_H
#define TETRAHEDRON_H

#include "Shape.h"
#include <cmath>

class Tetrahedron : public Shape {
private:
    double a;
public:
    Tetrahedron(double a);
    double volume() const override;
    void show() const override;
};

#endif // TETRAHEDRON_H
