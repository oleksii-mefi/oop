#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:
    virtual double volume() const = 0; // Чисто віртуальна функція
    virtual void show() const = 0; // Віртуальна функція виводу
    virtual ~Shape() {} // Віртуальний деструктор
};

#endif // SHAPE_H
