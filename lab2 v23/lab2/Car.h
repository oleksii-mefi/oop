#pragma once
#include "Engine.h"

class Car {
private:
    string brand;
    string color;
    string licensePlate;
    Engine engine;

public:
    // ������������
    Car();
    Car(string br, string col, string plate, Engine eng);

    // ������ set()
    void setBrand(string br);
    void setColor(string col);
    void setLicensePlate(string plate);
    void setEngine(Engine eng);

    // ������ get()
    string getBrand() const;
    string getColor() const;
    string getLicensePlate() const;
    Engine getEngine() const;

    // ������ show()
    void show() const;

    // ������ ��������������� ������ � �������
    void changeLicensePlate(string newPlate);
    void changeColor(string newColor);

    // ����������
    ~Car();
};
