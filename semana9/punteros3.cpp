#include <iostream>

using namespace std;

void cuboPorRefconPtrs(int* ptr) {
    *ptr = *ptr * *ptr * *ptr;
}

/*
Implementar el intercambio de valores de 2 numeros 
usando punteros*/
void intercambio(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {

    int y = 4;
    cuboPorRefconPtrs(&y);
    cout << y << endl;

    int x = 20;
    int z = 40;
    intercambio( &x, &z);
    cout << "x : " << x << endl; // 40
    cout << "y : " << z << endl; // 20

    return 0;
}
