#include "Car.h"

// ����������� �� �������������
Car::Car() : brand("Unknown"), color("White"), licensePlate("XXX000"), engine() {}

// ����������� �� �����������
Car::Car(string br, string col, string plate, Engine eng)
    : brand(br), color(col), licensePlate(plate), engine(eng) {
}

// ������ set()
void Car::setBrand(string br) { brand = br; }
void Car::setColor(string col) { color = col; }
void Car::setLicensePlate(string plate) { licensePlate = plate; }
void Car::setEngine(Engine eng) { engine = eng; }

// ������ get()
string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }
string Car::getLicensePlate() const { return licensePlate; }
Engine Car::getEngine() const { return engine; }

// ����� show()
void Car::show() const {
    cout << "�����: " << brand << "\n";
    cout << "����: " << color << "\n";
    cout << "�����: " << licensePlate << "\n";
    engine.show();
}

// ������ ��������������� ������ � �������
void Car::changeLicensePlate(string newPlate) { licensePlate = newPlate; }
void Car::changeColor(string newColor) { color = newColor; }

// ����������
Car::~Car() {}
