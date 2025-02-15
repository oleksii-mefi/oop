#include "Shapes.h"
#define _USE_MATH_DEFINES  
#include <cmath>
#include <iostream>
#include <fstream>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// ��������� ����� Cube
Cube::Cube() : side(1.0) {}
Cube::Cube(double s) : side(s) {}

double Cube::volume() const {
    return pow(side, 3);
}

double Cube::surfaceArea() const {
    return 6 * pow(side, 2);
}

void Cube::show() const {
    cout << "���:\n"
        << "  ������� �����: " << side << "\n"
        << "  ��'��: " << volume() << "\n"
        << "  ����� �������: " << surfaceArea() << "\n";
}

// ��������� ����� Sphere
Sphere::Sphere() : radius(1.0) {}
Sphere::Sphere(double r) : radius(r) {}

double Sphere::volume() const {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

double Sphere::surfaceArea() const {
    return 4 * M_PI * pow(radius, 2);
}

void Sphere::show() const {
    cout << "�����:\n"
        << "  �����: " << radius << "\n"
        << "  ��'��: " << volume() << "\n"
        << "  ����� �������: " << surfaceArea() << "\n";
}

// ��������� ����� SphereInCube
SphereInCube::SphereInCube(double sideLength) : Cube(sideLength), Sphere(sideLength / 2.0) {}

void SphereInCube::show() const {
    Cube::show();
    Sphere::show();
}

void SphereInCube::saveToFile(const string& filename) const {
    ofstream file(filename, ios::out); // ³�������� ���� � ����� ������
    if (!file) {
        cerr << "������� �������� �����!\n";
        return;
    }
    file << "���:\n"
        << "  ������� �����: " << side << "\n"
        << "  ��'��: " << Cube::volume() << "\n"
        << "  ����� �������: " << Cube::surfaceArea() << "\n\n";

    file << "�����:\n"
        << "  �����: " << radius << "\n"
        << "  ��'��: " << Sphere::volume() << "\n"
        << "  ����� �������: " << Sphere::surfaceArea() << "\n";

    file.close();
    cout << "��� ������ ������� � ���� " << filename << endl;
}

