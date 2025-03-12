// Programa elaborado por José L García
// Fecha: 12 de marzo de 2025
// Este programa muestra incrementos del nivel del mar

#include <iostream>

using namespace std;

int main() {
    int anios = 1;
    cout << "Año\tIncremento" << endl;
    while (anios <= 25) {
        double incremento = anios * 1.5;
        cout << anios << "\t"
             << incremento << endl;
        anios++;
    }

    return 0;
}



