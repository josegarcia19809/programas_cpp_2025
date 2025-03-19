// Programa elaborado por José L García
// Fecha: 14 de marzo de 2025
// Este programa pedirá 3 veces un número y lo estará agregando a una suma total
// (4, 7, 12) -> 23

#include <iostream>
using namespace std;

int main() {
    int numero = 0;
    int suma = 0;
    int contador = 1;
    while (contador <= 3) {
        cout << "Dame un número: ";
        cin >> numero;
        suma = suma + numero;
        // cout << "suma: " << suma << endl;
        contador++;
    }
    cout << "La suma total es: " << suma << endl;

    return 0;
}
