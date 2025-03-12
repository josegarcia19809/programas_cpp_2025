// Programa elaborado por José L García
// Fecha: 12 de marzo de 2025
// Este programa crea un tabulador de salarios

#include <iostream>

using namespace std;

int main() {
    int horas = 10;
    cout << "Horas\t\tSalario" << endl;
    while (horas <= 40) {
        cout << horas << "\t\t\t" << (horas * 50) << endl;
        horas = horas + 10;
    }

    return 0;
}



