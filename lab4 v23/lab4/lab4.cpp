#include "Shapes.h"
#include <Windows.h>



int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    double side;
    cout << "������ ������� ����� ����: ";
    cin >> side;

    SphereInCube obj(side);
    cout << "\n--- ���������� ��� ������ ---\n";
    obj.show();

    // ����� � ����
    obj.saveToFile("shapes_info.txt");

    return 0;
}
