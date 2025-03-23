// Programa elaborado por José L García
// Fecha: 21 de marzo de 2025
// Este programa calcula la tasa de ocupación de un hotel


#include <iostream>
using namespace std;

int main() {
    int pisos, habitaciones, ocupadas;

    cout << "Ocupación hotelera" << endl;

    cout << "¿Cuántos pisos hay en el hotel? ";
    cin >> pisos;

    if (pisos < 1) {
        cout << "Número de pisos no válido" << endl;
        cout << "Ejecuta nuevamente el programa" << endl;
        return 0;
    }

    int totalHabitaciones = 0;
    int totalOcupadas = 0;

    for (int i = 1; i <= pisos; i++) {
        cout << endl;
        cout << "¿Cuántas habitaciones tiene el piso #" << i << "? ";
        cin >> habitaciones;
        totalHabitaciones = totalHabitaciones + habitaciones;

        cout << "¿Cuántas habitaciones están ocupadas? ";
        cin >> ocupadas;
        totalOcupadas += ocupadas;
    }

    int totalDesocupadas = totalHabitaciones - totalOcupadas;
    double porcentajeOcupacion = totalOcupadas * 100.0 / totalHabitaciones;

    cout << endl;
    cout << "Total de habitaciones: " << totalHabitaciones << endl;
    cout << "Total de habitaciones ocupadas: " << totalOcupadas << endl;
    cout << "Total de habitaciones desocupadas: " << totalDesocupadas << endl;
    cout << "Porcentaje de ocupación: " << porcentajeOcupacion << endl;

    return 0;
}
