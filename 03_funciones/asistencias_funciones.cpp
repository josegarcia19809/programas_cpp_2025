//
// Created by Jose Garcia on 25/04/25.
// asistencias_funciones

// Este programa calcula el porcentaje de asistencias de un alumno

#include <iostream>
using namespace std;

// Prototipos de funciones
double calcularPorcentajeAsistencia(int numeroSesiones, int asistenciasAlumno);

int main() {
    int numSesiones, asistencias;
    double porCientoAsistencias;

    cout << "--------------------PORCENTAJE DE ASISTENCIAS-----------------------" << endl;

    cout << "Dame número de sesiones: ";
    cin >> numSesiones;

    cout << "Dame asistencias del alumno (-1 para terminar): ";
    cin >> asistencias;

    while (asistencias != -1) {
        // Se manda llamar a la función
        porCientoAsistencias = calcularPorcentajeAsistencia(numSesiones, asistencias);

        // Se evalua si el alumno puede presentar el examen
        if (porCientoAsistencias >= 80) {
            cout << "Puede presentar examen. Porcentaje: " << porCientoAsistencias
                    << "%" << endl;
        } else {
            cout << "*** NO *** puede presentar examen. Porcentaje: " << porCientoAsistencias
                    << "%" << endl;
        }
        cout << endl;

        cout << "Dame asistencias del alumno (-1 para terminar): ";
        cin >> asistencias;
    }

    return 0;
}

double calcularPorcentajeAsistencia(int numeroSesiones, int asistenciasAlumno) {
    // Se utiliza una regla de 3
    double porcentaje = (asistenciasAlumno * 100.0) / numeroSesiones;
    return porcentaje;
}
