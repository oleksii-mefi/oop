#include "Checksum.h"

// ����������� �����
template <typename T>
Checksum<T>::Checksum(T val) : value(val) {}

// ����� ��� ���������� ���������� ����
template <typename T>
int Checksum<T>::calculate() const {
    bitset<sizeof(T) * 8> bits(value); // ������ �������������
    return bits.count(); // ʳ������ ������� � ����
}

// ����� ��� ������ ����������
template <typename T>
void Checksum<T>::show() const {
    cout << "�������: " << value << " | ���������� ���� (������� 1): " << calculate() << endl;
}

// ���������� ������������ ������� ��� ���������
template class Checksum<int>;
template class Checksum<char>;
template class Checksum<float>;
