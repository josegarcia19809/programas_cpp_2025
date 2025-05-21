//
// Created by Jose Garcia on 21/05/25.
//
#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    vector<double> calificaciones;

    int numCalificaciones = 0;
    cout << "¿Cuántas calificaciones quieres capturar? ";
    cin >> numCalificaciones;

    for (int i = 1; i <= numCalificaciones; i++) {
        double calificacion;
        cout << "Dame calificación del estudiante #"
             << (i) << ": ";
        cin >> calificacion;

        calificaciones.push_back(calificacion);
    }

    // Mostrar calificaciones y el promedio
    double promedio = 0;
    double total = 0;
    for (double calif: calificaciones) {
        cout << "Calificación: " << calif << endl;
        total += calif;
    }

    promedio = total / numCalificaciones;
    cout << "Número de calificaciones: "
         << calificaciones.size() << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
