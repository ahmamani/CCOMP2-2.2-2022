/**
 * Implemente un programa que solicite un enteros e 
 * imprima si representa un año bisiesto
 */

#include <iostream>

using namespace std;

int main() { 

    int year;
    
    cout << "Ingrese el año: ";
    cin >> year;

    if (year%4 == 0 && year%100 != 0 || year%400 == 0){
        cout << "Si es año bisiesto";
    } else {
        cout << "No es año bisiesto";
    }
}