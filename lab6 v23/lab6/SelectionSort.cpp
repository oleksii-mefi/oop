#include "SelectionSort.h"

// ��������� �������� ������� ���������� �������
template <typename T>
void selectionSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]); // ���� ��������
    }
}

// ��������� ������� ������ ������
template <typename T>
void printArray(const T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ���������� ������������ ������� ��� ���������
template void selectionSort<int>(int[], int);
template void printArray<int>(const int[], int);
