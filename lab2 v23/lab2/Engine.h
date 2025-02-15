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
    // ������������
    Engine();
    Engine(double vol, int pow, string serial);

    // ������ set()
    void setVolume(double vol);
    void setPower(int pow);
    void setSerialNumber(string serial);

    // ������ get()
    double getVolume() const;
    int getPower() const;
    string getSerialNumber() const;

    // ����� show()
    void show() const;

    // ����������
    ~Engine();
};


