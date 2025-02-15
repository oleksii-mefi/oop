#include "ZavdClass.h"

System::String^ ZavdClass::TabulateA(double x_start, double x_end, double dx) {
    System::String^ result = "";
    for (double x = x_start; x <= x_end; x += dx) {
        double a_value = a * x;  // Використовуємо значення a
        result += "x = " + x.ToString("F2") + ", a = " + a_value.ToString("F2") + "\r\n";
    }
    return result;
}

System::String^ ZavdClass::TabulateB(double x_start, double x_end, double dx) {
    System::String^ result = "";
    for (double x = x_start; x <= x_end; x += dx) {
        double b_value = b * x;  // Використовуємо значення b
        result += "x = " + x.ToString("F2") + ", b = " + b_value.ToString("F2") + "\r\n";
    }
    return result;
}
