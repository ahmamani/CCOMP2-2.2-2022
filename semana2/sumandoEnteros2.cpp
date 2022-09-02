#include <iostream>

using namespace std;
/*
Programa que recibo dos enteros por teclado e
imprime la suma de ambos.
*/
int main() {
    // declarando dos variables de tipo entero
    int a;
    int b;

    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese segundo numero: ";
    cin >> b;

    int suma = a + b;

    cout << "La suma es : " << suma << endl;

    return 0;
}