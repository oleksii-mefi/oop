#ifndef CHECKSUM_H
#define CHECKSUM_H

#include <iostream>
#include <bitset>
using namespace std;

// Шаблонний клас для обчислення контрольної суми
template <typename T>
class Checksum {
private:
    T value;
public:
    Checksum(T val);   // Конструктор
    int calculate() const; // Метод для підрахунку кількості "1" у бітах
    void show() const;  // Метод виводу інформації
};

#endif // CHECKSUM_H