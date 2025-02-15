#pragma once
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// ���� ���
class Cube {
protected:
    double side; // ������� �����

public:
    Cube();               // ����������� ��� ���������
    Cube(double s);       // ����������� � �����������
    double volume() const;         // ���������� ��'��� ����
    double surfaceArea() const;     // ���������� ����� ������� ����
    void show() const;              // ���� ���������� ��� ���
};

// ���� �����
class Sphere {
protected:
    double radius; // ����� �����

public:
    Sphere();               // ����������� ��� ���������
    Sphere(double r);       // ����������� � �����������
    double volume() const;         // ���������� ��'��� �����
    double surfaceArea() const;     // ���������� ����� ������� �����
    void show() const;              // ���� ���������� ��� �����
};

// ���� �����, ������� � ��� (��������� ��� � �����)
class SphereInCube : public Cube, public Sphere {
public:
    SphereInCube(double sideLength); // ����������� � ����������
    void show() const;               // ���� ����������
    void saveToFile(const string& filename) const; // ����� � ����
};
