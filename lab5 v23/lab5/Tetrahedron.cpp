#include "Tetrahedron.h"

Tetrahedron::Tetrahedron(double a) : a(a) {}

double Tetrahedron::volume() const {
    return (pow(a, 3) / (6 * sqrt(2)));
}

void Tetrahedron::show() const {
    cout << "Тетраедр:\n  Ребро: " << a
        << "\n  Об'єм: " << volume() << "\n";
}
