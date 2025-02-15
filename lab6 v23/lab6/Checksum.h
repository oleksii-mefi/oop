#ifndef CHECKSUM_H
#define CHECKSUM_H

#include <iostream>
#include <bitset>
using namespace std;

// ��������� ���� ��� ���������� ���������� ����
template <typename T>
class Checksum {
private:
    T value;
public:
    Checksum(T val);   // �����������
    int calculate() const; // ����� ��� ��������� ������� "1" � ����
    void show() const;  // ����� ������ ����������
};

#endif // CHECKSUM_H