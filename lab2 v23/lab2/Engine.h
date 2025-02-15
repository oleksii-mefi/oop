#pragma once
#include <iostream>
#include <string>

using namespace std;

class Engine {
private:
    double volume;
    int power;
    string serialNumber;

public:
    // Конструктори
    Engine();
    Engine(double vol, int pow, string serial);

    // Методи set()
    void setVolume(double vol);
    void setPower(int pow);
    void setSerialNumber(string serial);

    // Методи get()
    double getVolume() const;
    int getPower() const;
    string getSerialNumber() const;

    // Метод show()
    void show() const;

    // Деструктор
    ~Engine();
};


