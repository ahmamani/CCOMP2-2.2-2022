/**
 * Implemente un programa que solicite dos enteros e 
 * imprima el mayor de ambos numeros
 */
#include <iostream>

using namespace std;

int main() {
    // declarando dos variables de tipo entero
    int a;
    int b;

    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese segundo numero: ";
    cin >> b;

    if(a > b) {
        cout << "El mayor es : " << a << endl;
    } else {
        cout << "El mayor es : " << b << endl;
    }

    return 0;
}