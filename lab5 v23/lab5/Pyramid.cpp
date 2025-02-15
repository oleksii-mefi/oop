#include "Pyramid.h"

Pyramid::Pyramid(double a, double b, double h) : a(a), b(b), h(h) {}

double Pyramid::volume() const {
    return (a * b * h) / 3;
}

void Pyramid::show() const {
    cout << "Піраміда:\n  Основа: " << a << " x " << b << ", Висота: " << h
        << "\n  Об'єм: " << volume() << "\n";
}
