#include "Checksum.h"

// Конструктор класу
template <typename T>
Checksum<T>::Checksum(T val) : value(val) {}

// Метод для обчислення контрольної суми
template <typename T>
int Checksum<T>::calculate() const {
    bitset<sizeof(T) * 8> bits(value); // Бітове представлення
    return bits.count(); // Кількість одиниць у бітах
}

// Метод для виводу інформації
template <typename T>
void Checksum<T>::show() const {
    cout << "Елемент: " << value << " | Контрольна сума (кількість 1): " << calculate() << endl;
}

// Експліцитна інстанціація шаблонів для компіляції
template class Checksum<int>;
template class Checksum<char>;
template class Checksum<float>;
