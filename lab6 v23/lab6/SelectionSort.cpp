#include "SelectionSort.h"

// Реалізація шаблонної функції сортування вибіркою
template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // Обмін елементів
    }
}

// Реалізація функції виводу масиву
template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Експліцитна інстанціація шаблонів для компіляції
template void selectionSort<int>(int[], int);
template void printArray<int>(const int[], int);
