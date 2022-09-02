#include <iostream>

using namespace std;
/**
 * Implemente un programa que solicite tres enteros e 
 * imprima el mayor de ambos numeros
 */
int main() {
    // declarando dos variables de tipo entero
    int a;
    int b;
    int c;

    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese segundo numero: ";
    cin >> b;
    cout << "Ingrese tercer numero: ";
    cin >> c;

    if( a > b && a > c ) {
        cout << "El mayor es : " << a << endl;
    } else if( b > a && b > c) {
        cout << "El mayor es : " << b << endl;
    } else {
        cout << "El mayor es : " << c << endl;
    }

    return 0;
}