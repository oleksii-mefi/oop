#pragma once

ref class ZavdC {
private:
    double a, b; // Поля для збереження результатів a та b
    double x, y, z; // Поля для збереження вхідних значень x, y, z

public:
    ZavdC(); // Конструктор за замовчуванням

    void Fn_b(double x, double y, double z); // Декларація методу для обчислення b
    void Fn_a(double x, double y, double z); // Декларація методу для обчислення a
    double Faktr(int n); // Декларація методу для обчислення факторіалу

    double geta(); // Метод для отримання значення a
    double getb(); // Метод для отримання значення b
};
