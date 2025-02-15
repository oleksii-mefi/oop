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
    // ������������
    Car();
    Car(string br, string col, int pow, double vol);

    // �������������� ��������� +=
    Car& operator+=(int extraPower);

    // ������ ������������ �� ��������� �����
    void setBrand(string br);
    void setColor(string col);
    void setPower(int pow);
    void setEngineVolume(double vol);

    string getBrand() const;
    string getColor() const;
    int getPower() const;
    double getEngineVolume() const;

    // ������ ������ �� ���������
    bool searchByBrand(string br) const;
    bool searchByColor(string col) const;
    bool searchByPower(int minPower, int maxPower) const;
    bool searchByEngineVolume(double minVol, double maxVol) const;

    // ���� ��� ��������� ���������
    friend ostream& operator<<(ostream& out, const Car& car);
    friend istream& operator>>(istream& in, Car& car);
};
