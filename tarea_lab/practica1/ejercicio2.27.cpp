#include <iostream>

using namespace std;

int main() {
    char myChar{'a'};
    cout << "Ingrese caracter: " << endl;
    cin >> myChar;

    cout << "Su codigo ASCII es: " << static_cast<int>(myChar) << endl;


    return 0;
}