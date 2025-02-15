#pragma once
#include "Engine.h"

class Car {
private:
    string brand;
    string color;
    string licensePlate;
    Engine engine;

public:
    // Конструктори
    Car();
    Car(string br, string col, string plate, Engine eng);

    // Методи set()
    void setBrand(string br);
    void setColor(string col);
    void setLicensePlate(string plate);
    void setEngine(Engine eng);

    // Методи get()
    string getBrand() const;
    string getColor() const;
    string getLicensePlate() const;
    Engine getEngine() const;

    // Методи show()
    void show() const;

    // Методи перепризначення номера і кольору
    void changeLicensePlate(string newPlate);
    void changeColor(string newColor);

    // Деструктор
    ~Car();
};
