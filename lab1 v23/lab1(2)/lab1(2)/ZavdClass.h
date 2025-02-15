#pragma once

ref class ZavdClass
{
private:
    double a, b;  // Значення a і b

public:
    ZavdClass(double a_value, double b_value) {
        a = a_value;
        b = b_value;
    }

    System::String^ TabulateA(double x_start, double x_end, double dx);
    System::String^ TabulateB(double x_start, double x_end, double dx);
};
