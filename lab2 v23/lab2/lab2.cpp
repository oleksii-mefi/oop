#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    setlocale(LC_ALL,"");
    // ��������� ��'���� Engine
    Engine myEngine(2.5, 200, "ENG2024001");

    // ��������� ��'���� Car
    Car myCar("BMW", "������", "AA5678BB", myEngine);

    // ���� ����������
    cout << "�������� ��� ��� ���������:\n";
    myCar.show();

    // ���� ������� �� ������
    myCar.changeColor("����");
    myCar.changeLicensePlate("CC1234DD");

    cout << "\n������� ��� ��� ���������:\n";
    myCar.show();

    return 0;
}
