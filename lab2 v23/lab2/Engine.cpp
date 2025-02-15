#include "Engine.h"

// ����������� �� �������������
Engine::Engine() : volume(1.6), power(100), serialNumber("UNKNOWN") {}

// ����������� �� �����������
Engine::Engine(double vol, int pow, string serial) : volume(vol), power(pow), serialNumber(serial) {}

// ������ set()
void Engine::setVolume(double vol) { volume = vol; }
void Engine::setPower(int pow) { power = pow; }
void Engine::setSerialNumber(string serial) { serialNumber = serial; }

// ������ get()
double Engine::getVolume() const { return volume; }
int Engine::getPower() const { return power; }
string Engine::getSerialNumber() const { return serialNumber; }

// ����� show()
void Engine::show() const {
    cout << "��'�� �������: " << volume << " �\n";
    cout << "���������: " << power << " �.�.\n";
    cout << "���������� �����: " << serialNumber << "\n";
}

// ����������
Engine::~Engine() {}
