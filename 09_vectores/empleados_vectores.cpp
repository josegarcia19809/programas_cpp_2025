//
// Created by Jose Garcia on 21/05/25.
//


#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    const int NUM_EMPLEADOS = 5;
    vector<int> horas(NUM_EMPLEADOS);
    vector<double> pagoPorHora(NUM_EMPLEADOS);
    int indice;

    // Ingresar los datos
    cout << "Ingresa las horas trabajadas de los "
         << NUM_EMPLEADOS << " empleados." << endl;
    cout << "Ingresa también sus pagos por hora" << endl;

    for (indice = 0; indice < NUM_EMPLEADOS; indice++) {
        cout << "Horas trabajadas del empleado #"
             << (indice + 1) << ": ";
        cin >> horas[indice];

        cout << "Pago por hora del empleado #"
             << (indice + 1) << ": ";
        cin >> pagoPorHora[indice];
    }

    // Calcular el pago de cada trabajador
    cout << "Mostrando el pago bruto de cada trabajador"
         << endl;
    cout << fixed << showpoint << setprecision(2);

    for (indice = 0; indice < NUM_EMPLEADOS; indice++) {
        double pagoBruto = horas[indice] * pagoPorHora[indice];
        cout << "Empleado #" << (indice + 1) << ": $"
             << pagoBruto << endl;
    }

    return 0;
}