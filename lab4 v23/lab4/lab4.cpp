#include "Shapes.h"
#include <Windows.h>



int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    double side;
    cout << "Введіть довжину ребра куба: ";
    cin >> side;

    SphereInCube obj(side);
    cout << "\n--- Інформація про фігури ---\n";
    obj.show();

    // Запис у файл
    obj.saveToFile("shapes_info.txt");

    return 0;
}
