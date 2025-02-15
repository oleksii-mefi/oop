#include "Parallelepiped.h"

Parallelepiped::Parallelepiped(double a, double b, double c) : a(a), b(b), c(c) {}

double Parallelepiped::volume() const {
    return a * b * c;
}

void Parallelepiped::show() const {
    cout << "������������:\n  �����: " << a << ", " << b << ", " << c
        << "\n  ��'��: " << volume() << "\n";
}
