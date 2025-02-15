#include "ZavdC.h"
#include <cmath>

// Реалізація конструктора
ZavdC::ZavdC() {
    a = 1; // Ініціалізація a
    b = 1; // Ініціалізація b
}

// Реалізація методу для обчислення b
void ZavdC::Fn_b(double x, double y, double z) {
    x *= 23;
    y *= 23;
    z *= 23;

    this->x = x;
    this->y = y;
    this->z = z;

    b = pow(fabs(y + x), 0.2) / pow(fabs(z), 1.34) + pow(y - z, 2) / (1 + pow(sin(z), 2)) + pow(fabs(z - y), 3) / (z / cos(x));
}

// Реалізація методу для обчислення a
void ZavdC::Fn_a(double x, double y, double z) {
    x *= 23;
    y *= 23;
    z *= 23;

    this->x = x;
    this->y = y;
    this->z = z;

    a = (pow(fabs(x * x - 1), 0.3) - cbrt(sin(y + 2 * b))) / (1 + x / Faktr(1) + pow(y, 2) / Faktr(2) + pow(z, 3) / Faktr(3));
}

// Реалізація методу для обчислення факторіалу
double ZavdC::Faktr(int n) {
    double f = 1;
    for (int i = 2; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Реалізація методу для отримання значення a
double ZavdC::geta() {
    return a;
}

// Реалізація методу для отримання значення b
double ZavdC::getb() {
    return b;
}
