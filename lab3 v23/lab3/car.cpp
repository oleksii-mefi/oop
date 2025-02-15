#include "Car.h"

// Конструктор за замовчуванням
Car::Car() : brand("Unknown"), color("White"), power(100), engineVolume(1.6) {}

// Конструктор з параметрами
Car::Car(string br, string col, int pow, double vol) : brand(br), color(col) {
    setPower(pow);
    setEngineVolume(vol);
}

// Перевантаження оператора += (збільшення потужності)
Car& Car::operator+=(int extraPower) {
    if (extraPower < 0) throw invalid_argument("Потужність не може бути зменшена через +=!");
    power += extraPower;
    return *this;
}

// Методи встановлення значень
void Car::setBrand(string br) { brand = br; }
void Car::setColor(string col) { color = col; }

void Car::setPower(int pow) {
    if (pow < 50 || pow > 2000) throw out_of_range("Потужність має бути від 50 до 2000 к.с.");
    power = pow;
}

void Car::setEngineVolume(double vol) {
    if (vol < 0.5 || vol > 8.0) throw out_of_range("Об'єм двигуна має бути від 0.5 до 8.0 л.");
    engineVolume = vol;
}

// Методи отримання значень
string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }
int Car::getPower() const { return power; }
double Car::getEngineVolume() const { return engineVolume; }

// Методи пошуку
bool Car::searchByBrand(string br) const { return brand == br; }
bool Car::searchByColor(string col) const { return color == col; }
bool Car::searchByPower(int minPower, int maxPower) const { return power >= minPower && power <= maxPower; }
bool Car::searchByEngineVolume(double minVol, double maxVol) const { return engineVolume >= minVol && engineVolume <= maxVol; }

// Перевантаження оператора виводу <<
ostream& operator<<(ostream& out, const Car& car) {

    out << "Марка: " << car.brand << "\n"
        << "Колір: " << car.color << "\n"
        << "Потужність: " << car.power << " к.с.\n"
        << "Об'єм двигуна: " << car.engineVolume << " л\n";
    return out;
}

// Перевантаження оператора введення >>
istream& operator>>(istream& in, Car& car) {
    cout << "Введіть марку автомобіля: ";
    in >> car.brand;
    cout << "Введіть колір: ";
    in >> car.color;

    cout << "Введіть потужність (50-2000 к.с.): ";
    in >> car.power;
    if (car.power < 50 || car.power > 2000)
        throw out_of_range("Помилка! Потужність має бути в діапазоні 50-2000 к.с.");

    cout << "Введіть об'єм двигуна (0.5-8.0 л): ";
    in >> car.engineVolume;
    if (car.engineVolume < 0.5 || car.engineVolume > 8.0)
        throw out_of_range("Помилка! Об'єм двигуна має бути від 0.5 до 8.0 л.");

    return in;
}
