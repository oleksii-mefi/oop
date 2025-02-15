#include "Parallelepiped.h"
#include "Pyramid.h"
#include "Tetrahedron.h"
#include "Sphere.h"
#include <Windows.h>
int main() {
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    Shape* shapes[] = {
        new Parallelepiped(3, 4, 5),
        new Pyramid(3, 4, 6),
        new Tetrahedron(3),
        new Sphere(5)
    };

    // Вивід інформації про кожну фігуру
    for (Shape* shape : shapes) {
        shape->show();
        cout << "--------------------------\n";
    }

    // Очищення пам'яті
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}
