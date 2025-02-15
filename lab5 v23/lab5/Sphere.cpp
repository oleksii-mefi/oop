#include "Sphere.h"
#define _USE_MATH_DEFINES  
#include <cmath>
#include <fstream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
Sphere::Sphere(double r) : r(r) {}

double Sphere::volume() const {
    return (4.0 / 3.0) * M_PI * pow(r, 3);
}

void Sphere::show() const {
    cout << "Êóëÿ:\n  Ðàä³óñ: " << r
        << "\n  Îá'ºì: " << volume() << "\n";
}
