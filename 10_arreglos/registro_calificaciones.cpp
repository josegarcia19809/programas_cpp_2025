//
// Created by Jose Garcia on 26/05/25.
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Estructura para almacenar nombre de materia y calificación
struct Materia {
    string nombre;
    double calificacion;
};

int main() {
    const int MAXIMO_MATERIAS = 50;
    Materia materias[MAXIMO_MATERIAS];
    int numMaterias;
    double sumaCalificaciones = 0.0;

    cout << "Registro de calificaciones de estudiantes" << endl;
    cout << "Escuela secundaria San Mateo" << endl;
    cout << endl;

    // Ingresar número de materias
    cout << "Ingrese el número de materias (máximo " << MAXIMO_MATERIAS << "): ";
    cin >> numMaterias;

    if (numMaterias > MAXIMO_MATERIAS || numMaterias <= 0) {
        cout << "Número inválido de materias" << endl;
        cout << "Intentar nuevamente" << endl;
        return 1;
    }

    // Ingresar nombre y calificación de cada materia
    for (int i = 0; i < numMaterias; ++i) {
        cout << "\nMateria #" << (i + 1) << endl;
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, materias[i].nombre);

        cout << "Calificación: ";
        cin >> materias[i].calificacion;

        sumaCalificaciones += materias[i].calificacion;
    }

    cout << fixed << setprecision(1);

    // Mostrar materias reprobadas
    cout << "Materias no aprobadas (calificación < 6.0)" << endl;
    bool hayReprobadas = false;

    for (int i = 0; i < numMaterias; ++i) {
        if (materias[i].calificacion < 6) {
            cout << ".............................." << endl;
            cout << "Nombre: " << materias[i].nombre;
            cout << " - Calificación: " << materias[i].calificacion << endl;
            cout << endl;
            hayReprobadas = true;
        }
    }
    if (!hayReprobadas) {
        cout << "No hubo materias reprobadas" << endl;
    }

    // Mostrar materias aprobadas
    cout << "Materias aprobadas (calificación >= 6.0)" << endl;
    bool hayAprobadas = false;

    for (int i = 0; i < numMaterias; ++i) {
        if (materias[i].calificacion >= 6.0) {
            cout << ".............................." << endl;
            cout << "Nombre: " << materias[i].nombre;
            cout << " - Calificación: " << materias[i].calificacion << endl;
            cout << endl;
            hayAprobadas = true;
        }
    }
    if (!hayAprobadas) {
        cout << "No hubo materias aprobadas" << endl;
    }

    // Mostrar promedio general
    double promedio = sumaCalificaciones / numMaterias;
    cout << "\nPromedio general: " << promedio << endl;


    return 0;
}