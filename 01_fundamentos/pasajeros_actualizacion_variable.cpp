// Programa elaborado por José L García
// Fecha: 28 de febrero de 2025
// Este programa actualiza los pasajeros que suben y bajan de un camión

#include <iostream>
using namespace std;

int main() {
    int pasajeros = 0;
    cout << "-----------------------------------------------" << endl;
    cout << "Programa que actualiza los pasajeros que suben y bajan de un camión" << endl;

    // Primera parada: Suben 30
    pasajeros = pasajeros + 30;
    cout << "1. Pasajeros: " << pasajeros << endl;

    // Segunda parada: Bajan 10, Suben 4
    pasajeros = pasajeros - 10;
    pasajeros = pasajeros + 4;
    cout << "2. Pasajeros: " << pasajeros << endl; // 24

    // Tercera parada: Bajan 8, Suben 2
    pasajeros -= 8;
    pasajeros += 2;
    cout << "3. Pasajeros: " << pasajeros << endl; // 18

    // Cuarta parada: Baja 1, Suben 2
    pasajeros -= 1;
    pasajeros = pasajeros + 2;
    cout << "4. Pasajeros: " << pasajeros << endl; // 19

    // Quinta parada: Baja 1, Sube 1
    pasajeros--;
    pasajeros++;
    cout << "5. Pasajeros: " << pasajeros << endl; // 19

    return 0;
}
