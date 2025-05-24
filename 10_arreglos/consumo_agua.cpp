//
// Created by Jose Garcia on 23/05/25.
// Programa para calcular el consumo de agua de un condominio y el promedio diario


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int DIAS = 7;
    int litros[] = {300, 500, 700, 600, 100, 400, 250};

    int litrosConsumidos = 0;
    for (int i = 0; i < DIAS; ++i) {
        litrosConsumidos += litros[i];
    }

    // Mostrar total de litros consumidos
    cout << "Litros consumidos : " << litrosConsumidos << endl;

    // Sacar el promedio y mostrarlo
    double promedio_consumo = static_cast<double>(litrosConsumidos) / DIAS;
    cout << fixed << setprecision(2);
    cout << "Promedio: " << promedio_consumo << endl;

    return 0;
}
