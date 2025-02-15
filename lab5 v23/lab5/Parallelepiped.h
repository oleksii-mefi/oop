#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "Shape.h"

class Parallelepiped : public Shape {
private:
    double a, b, c;
public:
    Parallelepiped(double a, double b, double c);
    double volume() const override;
    void show() const override;
};

#endif // PARALLELEPIPED_H
