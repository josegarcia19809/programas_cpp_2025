// Programa elaborado por José L García
// Fecha: 10 de marzo de 2025
// Este programa hace conversiones a números romanos

#include <iostream>

using namespace std;

int main() {
    int numero = 0;
    cout << "Programa para convertir a romanos" << endl;
    cout << "Dame un número entre 1 y 10: " << endl;
    cin >> numero;

    // Validación
    if (numero < 1 || numero > 10) {
        cout << "El número no es válido" << endl;
        cout << "Vuelva a ejecutar el programa" << endl;
        cout << "Escriba un número entre 1 y 10" << endl;
        return 0;
    }

    if (numero == 1) {
        cout << "I" << endl;
    } else if (numero == 2) {
        cout << "II" << endl;
    } else if (numero == 3) {
        cout << "III" << endl;
    }
    // ... y así

    return 0;
}



