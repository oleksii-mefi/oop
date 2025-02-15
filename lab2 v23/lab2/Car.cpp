#include "Car.h"

// Конструктор за замовчуванням
Car::Car() : brand("Unknown"), color("White"), licensePlate("XXX000"), engine() {}

// Конструктор із параметрами
Car::Car(string br, string col, string plate, Engine eng)
    : brand(br), color(col), licensePlate(plate), engine(eng) {
}

// Методи set()
void Car::setBrand(string br) { brand = br; }
void Car::setColor(string col) { color = col; }
void Car::setLicensePlate(string plate) { licensePlate = plate; }
void Car::setEngine(Engine eng) { engine = eng; }

// Методи get()
string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }
string Car::getLicensePlate() const { return licensePlate; }
Engine Car::getEngine() const { return engine; }

// Метод show()
void Car::show() const {
    cout << "Марка: " << brand << "\n";
    cout << "Колір: " << color << "\n";
    cout << "Номер: " << licensePlate << "\n";
    engine.show();
}

// Методи перепризначення номера і кольору
void Car::changeLicensePlate(string newPlate) { licensePlate = newPlate; }
void Car::changeColor(string newColor) { color = newColor; }

// Деструктор
Car::~Car() {}
