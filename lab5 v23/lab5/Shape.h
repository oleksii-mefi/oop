#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using namespace std;

class Shape {
public:
    virtual double volume() const = 0; // ����� ��������� �������
    virtual void show() const = 0; // ³�������� ������� ������
    virtual ~Shape() {} // ³��������� ����������
};

#endif // SHAPE_H
