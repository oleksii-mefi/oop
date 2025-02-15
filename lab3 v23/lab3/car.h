#pragma once
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class Car {
private:
    string brand;
    string color;
    int power;
    double engineVolume;

public:
    // Конструктори
    Car();
    Car(string br, string col, int pow, double vol);

    // Перевантаження оператора +=
    Car& operator+=(int extraPower);

    // Методи встановлення та отримання даних
    void setBrand(string br);
    void setColor(string col);
    void setPower(int pow);
    void setEngineVolume(double vol);

    string getBrand() const;
    string getColor() const;
    int getPower() const;
    double getEngineVolume() const;

    // Методи пошуку за критеріями
    bool searchByBrand(string br) const;
    bool searchByColor(string col) const;
    bool searchByPower(int minPower, int maxPower) const;
    bool searchByEngineVolume(double minVol, double maxVol) const;

    // Друзі для потокових операторів
    friend ostream& operator<<(ostream& out, const Car& car);
    friend istream& operator>>(istream& in, Car& car);
};
