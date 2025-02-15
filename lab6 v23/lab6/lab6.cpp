#include "SelectionSort.h"
#include "Checksum.h"
#include <Windows.h>
int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    // ������������ ���������� �������
    int arr[] = { 5, 2, 9, 1, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "����� �� ����������: ";
    printArray(arr, size);

    selectionSort(arr, size);

    cout << "����� ���� ����������: ";
    printArray(arr, size);

    cout << "\n";

    // ������������ ���������� ����
    Checksum<int> cs1(15);      // 15 -> 1111 (4 �������)
    Checksum<char> cs2('A');    // 'A' -> 01000001 (2 �������)
    Checksum<float> cs3(3.14f); // ������� ������������� 

    cs1.show();
    cs2.show();
    cs3.show();

    return 0;
}
