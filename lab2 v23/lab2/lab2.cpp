#include <iostream>
#include "Car.h"

using namespace std;

int main() {
    setlocale(LC_ALL,"");
    // Створення об'єкта Engine
    Engine myEngine(2.5, 200, "ENG2024001");

    // Створення об'єкта Car
    Car myCar("BMW", "Чорний", "AA5678BB", myEngine);

    // Вивід інформації
    cout << "Початкові дані про автомобіль:\n";
    myCar.show();

    // Зміна кольору та номера
    myCar.changeColor("Синій");
    myCar.changeLicensePlate("CC1234DD");

    cout << "\nОновлені дані про автомобіль:\n";
    myCar.show();

    return 0;
}
