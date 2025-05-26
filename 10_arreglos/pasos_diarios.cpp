//
// Created by Jose Garcia on 26/05/25.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int DIAS = 7;
    string dias[DIAS] = {"domingo", "lunes", "martes", "miércoles", "jueves", "viernes",
                         "sábado"};
    int pasos[DIAS];

    cout << "Seguimiento de pasos diarios" << endl;
    cout << "HealthTrack App" << endl;

    // Pedir los pasos
    int totalPasos = 0;
    for (int i = 0; i < DIAS; ++i) { // 0...6,  7 veces
        cout << "Pasos del día " << (i + 1) << " (" << dias[i] << "): ";
        cin >> pasos[i];
        totalPasos += pasos[i];
    }

    cout << "Total de pasos: " << totalPasos << endl;
    double promedio = static_cast<double>(totalPasos) / DIAS;
    cout << "Promedio: " << promedio << endl;

    // Sacar el mayor
    int mayor = pasos[0];
    int indice = 0;

    for (int i = 1; i < DIAS; ++i) {
        if (pasos[i] > mayor) {
            mayor = pasos[i];
            indice = i;
        }
    }

    cout << "El día en que se caminó más fue el " << dias[indice] << " con " << mayor
         << " pasos" << endl;

    cout << "Felicidades por su actividad física de esta semana" << endl;

    return 0;
}