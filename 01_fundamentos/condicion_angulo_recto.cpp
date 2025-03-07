// Programa elaborado por José L García
// Fecha: 7 de marzo de 2025
// Este programa muestra si un ángulo es recto o no

#include <iostream>
using namespace std;

int main() {
    int angulo;
    cout << "Programa para decir si un ángulo es recto o no" << endl;

    cout << "Ingresa un ángulo: ";
    cin >> angulo;

    if (angulo == 90) {
        cout << "Es un ángulo recto" << endl;
    } else {
        cout << "No es un ángulo recto" << endl;
    }

    return 0;
}
