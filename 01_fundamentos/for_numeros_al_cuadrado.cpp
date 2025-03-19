// Programa elaborado por José L García
// Fecha: 19 de marzo de 2025
// Este programa muestra una tabla de números y sus cuadrados

#include <iostream>

using namespace std;

int main() {
    const int MINIMO = 1;
    const int MAXIMO = 10;

    cout << "Número\t\tCuadrado" << endl;
    cout << "--------------------" << endl;
    for (int numero = MINIMO; numero <= MAXIMO; numero++) {
        int cuadrado = numero * numero;
        cout << numero << "\t\t\t" << cuadrado << endl;
    }

    return 0;
}



