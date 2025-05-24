//
// Created by Jose Garcia on 23/05/25.
// Este programa calcula el salario total de cada uno de los baristas de Megan


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int EMPLEADOS = 6;
    int horas[EMPLEADOS];

    double pagoPorHora;

    // Pedir las horas trabajadas de cada empleado
    cout << "Horas de los empleados" << endl;
    for (int i = 0; i < EMPLEADOS; ++i) {
        cout << "Empleado #" << (i + 1) << ": ";
        cin >> horas[i];
    }

    cout << "Dame pago por hora: ";
    cin >> pagoPorHora;

    cout << "Pagos de los empleados de MEGAN" << endl;
    cout << fixed << setprecision(2);

    // Calcular los pagos de cada trabajador
    for (int i = 0; i < EMPLEADOS; ++i) {
        double pagoTotal = horas[i] * pagoPorHora;
        cout << "Pago del empleado " << (i + 1) << ": $" << pagoTotal << endl;
    }
    // horas = [20, 24, 30, 18, 1, 40]
    // pago por hora: 100
    return 0;
}
