#include "Car.h"

// ����������� �� �������������
Car::Car() : brand("Unknown"), color("White"), power(100), engineVolume(1.6) {}

// ����������� � �����������
Car::Car(string br, string col, int pow, double vol) : brand(br), color(col) {
    setPower(pow);
    setEngineVolume(vol);
}

// �������������� ��������� += (��������� ���������)
Car& Car::operator+=(int extraPower) {
    if (extraPower < 0) throw invalid_argument("��������� �� ���� ���� �������� ����� +=!");
    power += extraPower;
    return *this;
}

// ������ ������������ �������
void Car::setBrand(string br) { brand = br; }
void Car::setColor(string col) { color = col; }

void Car::setPower(int pow) {
    if (pow < 50 || pow > 2000) throw out_of_range("��������� �� ���� �� 50 �� 2000 �.�.");
    power = pow;
}

void Car::setEngineVolume(double vol) {
    if (vol < 0.5 || vol > 8.0) throw out_of_range("��'�� ������� �� ���� �� 0.5 �� 8.0 �.");
    engineVolume = vol;
}

// ������ ��������� �������
string Car::getBrand() const { return brand; }
string Car::getColor() const { return color; }
int Car::getPower() const { return power; }
double Car::getEngineVolume() const { return engineVolume; }

// ������ ������
bool Car::searchByBrand(string br) const { return brand == br; }
bool Car::searchByColor(string col) const { return color == col; }
bool Car::searchByPower(int minPower, int maxPower) const { return power >= minPower && power <= maxPower; }
bool Car::searchByEngineVolume(double minVol, double maxVol) const { return engineVolume >= minVol && engineVolume <= maxVol; }

// �������������� ��������� ������ <<
ostream& operator<<(ostream& out, const Car& car) {

    out << "�����: " << car.brand << "\n"
        << "����: " << car.color << "\n"
        << "���������: " << car.power << " �.�.\n"
        << "��'�� �������: " << car.engineVolume << " �\n";
    return out;
}

// �������������� ��������� �������� >>
istream& operator>>(istream& in, Car& car) {
    cout << "������ ����� ���������: ";
    in >> car.brand;
    cout << "������ ����: ";
    in >> car.color;

    cout << "������ ��������� (50-2000 �.�.): ";
    in >> car.power;
    if (car.power < 50 || car.power > 2000)
        throw out_of_range("�������! ��������� �� ���� � ������� 50-2000 �.�.");

    cout << "������ ��'�� ������� (0.5-8.0 �): ";
    in >> car.engineVolume;
    if (car.engineVolume < 0.5 || car.engineVolume > 8.0)
        throw out_of_range("�������! ��'�� ������� �� ���� �� 0.5 �� 8.0 �.");

    return in;
}
