#pragma once

ref class ZavdC {
private:
    double a, b; // ���� ��� ���������� ���������� a �� b
    double x, y, z; // ���� ��� ���������� ������� ������� x, y, z

public:
    ZavdC(); // ����������� �� �������������

    void Fn_b(double x, double y, double z); // ���������� ������ ��� ���������� b
    void Fn_a(double x, double y, double z); // ���������� ������ ��� ���������� a
    double Faktr(int n); // ���������� ������ ��� ���������� ���������

    double geta(); // ����� ��� ��������� �������� a
    double getb(); // ����� ��� ��������� �������� b
};
