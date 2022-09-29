#include <iostream>
#include "Point.h"

using namespace std;

int suma(int a, int b) {
    return a + b;
}

void imprimirNum(int a) {
    cout << "El numero es : " << a << endl;
}

void imprimirPoint(Point p) {
    cout << "(" << p.getX() << ", " << p.getY() << ")" << endl;
}

void modificarPoint(int _x, int _y, Point &p) {
    p.setX(_x);
    p.setY(_y);
}

int main() {

    int result = suma(5, 6); // CORRECTO
    cout << suma(5, 6) << endl; // CORRECTO

    //int var = imprimirNum(5);   // ERROR
    //cout << imprimirNum(5) << endl;  // ERROR
    imprimirNum(6);  // CORRECTO

    Point p1(5, 6);
    //int var = imprimirPoint(p1); // ERROR
    //cout << imprimirPoint(p1) << endl; // ERROR
    imprimirPoint(p1);
    modificarPoint(7, 8, p1);
    imprimirPoint(p1);

    return 0;
}
