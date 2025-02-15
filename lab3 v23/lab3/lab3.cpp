#include "Car.h"
#include <Windows.h>
int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    try {
        // ��������� ���������
        Car myCar("BMW", "������", 250, 3.0);
        cout << "���� �������� ������:\n" << myCar << endl;

        // �������������� �������� += (��������� ���������)
        myCar += 50;
        cout << "ϳ��� ��������� ���������:\n" << myCar << endl;

        // ����� �� ������
        if (myCar.searchByBrand("BMW")) cout << "�������� BMW!\n";

        // �������� ������ ���������
        Car userCar;
        cout << "\n������ ��� ������ ���������:\n";
        cin >> userCar;
        cout << "\n��� �������� ���������:\n" << userCar << endl;

    }
    catch (const exception& e) {
        cerr << "�������: " << e.what() << endl;
    }

    return 0;
}
