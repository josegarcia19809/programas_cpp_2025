// Programa elaborado por José L García
// Fecha: 7 de marzo de 2025
// Este programa muestra si una temperatura está por encima de los 100 grados

#include <iostream>
using namespace std;

int main() {
    int temperatura;
    cout << "Programa para decir si una temperatura está arriba de su punto de ebullición" << endl;
    cout << "Ingresa temperatura: ";
    cin >> temperatura;

    if (temperatura > 100) {
        cout << "Por encima del punto de ebullición del agua" << endl;
    } else {
        cout << "Por debajo del punto de ebullición del agua" << endl;
    }

    return 0;
}
