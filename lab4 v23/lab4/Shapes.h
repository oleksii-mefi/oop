#pragma once
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// Клас Куб
class Cube {
protected:
    double side; // Довжина ребра

public:
    Cube();               // Конструктор без параметрів
    Cube(double s);       // Конструктор з параметрами
    double volume() const;         // Обчислення об'єму куба
    double surfaceArea() const;     // Обчислення площі поверхні куба
    void show() const;              // Вивід інформації про куб
};

// Клас Сфера
class Sphere {
protected:
    double radius; // Радіус сфери

public:
    Sphere();               // Конструктор без параметрів
    Sphere(double r);       // Конструктор з параметрами
    double volume() const;         // Обчислення об'єму сфери
    double surfaceArea() const;     // Обчислення площі поверхні сфери
    void show() const;              // Вивід інформації про сферу
};

// Клас Сфера, вписана у Куб (успадковує Куб і Сферу)
class SphereInCube : public Cube, public Sphere {
public:
    SphereInCube(double sideLength); // Конструктор з параметром
    void show() const;               // Вивід інформації
    void saveToFile(const string& filename) const; // Запис у файл
};
