//
// Created by Jose Garcia on 08/04/25.
//

#include <iostream>
using namespace std;

int main() {
    double ganancia_por_dia = 20;
    double total = 0;

    for (int dia = 1; dia <= 6; dia++) {
        total += ganancia_por_dia;

        cout << "Ganancia del día " << dia << ": " << ganancia_por_dia << endl;
        if (dia == 6) {
            cout << "Ganancia del sábado: $" << ganancia_por_dia << endl;
        }

        ganancia_por_dia *= 2;
    }

    cout << "Ganancia total de lunes a sábado: $" << total << endl;

    return 0;
}
