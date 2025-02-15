#include "Shapes.h"
#define _USE_MATH_DEFINES  
#include <cmath>
#include <iostream>
#include <fstream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Реалізація класу Cube
Cube::Cube() : side(1.0) {}
Cube::Cube(double s) : side(s) {}

double Cube::volume() const {
    return pow(side, 3);
}

double Cube::surfaceArea() const {
    return 6 * pow(side, 2);
}

void Cube::show() const {
    cout << "Куб:\n"
        << "  Довжина ребра: " << side << "\n"
        << "  Об'єм: " << volume() << "\n"
        << "  Площа поверхні: " << surfaceArea() << "\n";
}

// Реалізація класу Sphere
Sphere::Sphere() : radius(1.0) {}
Sphere::Sphere(double r) : radius(r) {}

double Sphere::volume() const {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

double Sphere::surfaceArea() const {
    return 4 * M_PI * pow(radius, 2);
}

void Sphere::show() const {
    cout << "Сфера:\n"
        << "  Радіус: " << radius << "\n"
        << "  Об'єм: " << volume() << "\n"
        << "  Площа поверхні: " << surfaceArea() << "\n";
}

// Реалізація класу SphereInCube
SphereInCube::SphereInCube(double sideLength) : Cube(sideLength), Sphere(sideLength / 2.0) {}

void SphereInCube::show() const {
    Cube::show();
    Sphere::show();
}

void SphereInCube::saveToFile(const string& filename) const {
    ofstream file(filename, ios::out); // Відкриваємо файл у режимі запису
    if (!file) {
        cerr << "Помилка відкриття файлу!\n";
        return;
    }
    file << "Куб:\n"
        << "  Довжина ребра: " << side << "\n"
        << "  Об'єм: " << Cube::volume() << "\n"
        << "  Площа поверхні: " << Cube::surfaceArea() << "\n\n";

    file << "Сфера:\n"
        << "  Радіус: " << radius << "\n"
        << "  Об'єм: " << Sphere::volume() << "\n"
        << "  Площа поверхні: " << Sphere::surfaceArea() << "\n";

    file.close();
    cout << "Дані успішно записані у файл " << filename << endl;
}

