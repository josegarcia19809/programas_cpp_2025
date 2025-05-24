//
// Created by Jose Garcia on 23/05/25.
// Programa para calcular el total de ventas de una tienda, los días de mayor venta y menor venta


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int DIAS = 7;
    string diasSemana[DIAS] = {"domingo", "lunes", "martes", "miércoles", "jueves", "viernes", "sábado"};
    double ventas[DIAS];

    cout << "Control de ventas diarias en una tienda – Tienda ElectroHogar" << endl;
    cout << "Dame las ventas de cada día" << endl;

    // Pedir las ventas de cada día y sumarlas de una vez
    double totalVentas = 0;
    for (int i = 0; i < DIAS; ++i) {
        cout << "Día #" << (i + 1) << " (" << diasSemana[i] << "): ";
        cin >> ventas[i];
        totalVentas += ventas[i];
    }

    double minimo = ventas[0];
    double maximo = ventas[0];

    int indiceMaximo = 0;
    int indiceMinimo = 0;

    for (int i = 1; i < DIAS; ++i) {
        if (ventas[i] < minimo) {
            minimo = ventas[i];
            indiceMinimo = i;
        }
        if (ventas[i] > maximo) {
            maximo = ventas[i];
            indiceMaximo = i;
        }
    }

    cout << fixed << setprecision(2);
    cout << endl;
    cout << diasSemana[indiceMinimo] << " tuvo la venta mínima de $" << minimo << endl;
    cout << diasSemana[indiceMaximo] << " tuvo la venta máxima de $" << maximo << endl;
    cout << "Total de ventas: $" << totalVentas << endl;


    return 0;
}

/*
*Día #1: 200
Día #2: 300
Día #3: 400
Día #4: 500
Día #5: 450
Día #6: 750
Día #7: 120
 **/
