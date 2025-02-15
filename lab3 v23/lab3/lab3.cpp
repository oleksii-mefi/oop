#include "Car.h"
#include <Windows.h>
int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    try {
        // Створення автомобіля
        Car myCar("BMW", "Чорний", 250, 3.0);
        cout << "Авто створене успішно:\n" << myCar << endl;

        // Перевантажений оператор += (збільшення потужності)
        myCar += 50;
        cout << "Після збільшення потужності:\n" << myCar << endl;

        // Пошук за маркою
        if (myCar.searchByBrand("BMW")) cout << "Знайдено BMW!\n";

        // Введення нового автомобіля
        Car userCar;
        cout << "\nВведіть дані нового автомобіля:\n";
        cin >> userCar;
        cout << "\nВаш введений автомобіль:\n" << userCar << endl;

    }
    catch (const exception& e) {
        cerr << "Помилка: " << e.what() << endl;
    }

    return 0;
}
