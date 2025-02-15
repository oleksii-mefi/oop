#include "Engine.h"

// Конструктор за замовчуванням
Engine::Engine() : volume(1.6), power(100), serialNumber("UNKNOWN") {}

// Конструктор із параметрами
Engine::Engine(double vol, int pow, string serial) : volume(vol), power(pow), serialNumber(serial) {}

// Методи set()
void Engine::setVolume(double vol) { volume = vol; }
void Engine::setPower(int pow) { power = pow; }
void Engine::setSerialNumber(string serial) { serialNumber = serial; }

// Методи get()
double Engine::getVolume() const { return volume; }
int Engine::getPower() const { return power; }
string Engine::getSerialNumber() const { return serialNumber; }

// Метод show()
void Engine::show() const {
    cout << "Об'єм двигуна: " << volume << " л\n";
    cout << "Потужність: " << power << " к.с.\n";
    cout << "Заводський номер: " << serialNumber << "\n";
}

// Деструктор
Engine::~Engine() {}
