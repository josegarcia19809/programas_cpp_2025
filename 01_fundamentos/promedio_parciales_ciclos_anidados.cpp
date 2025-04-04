//
// Created by Jose Garcia on 04/04/25.
//
/*
    Este programa declara el número de estudiantes y los parciales que presenta cada estudiante.
    Pedirá las calificaciones y obtendrá el promedio de cada estudiante.
*/


#include <iostream>

using namespace std;

int main() {
    const int ESTUDIANTES = 5;
    const int PARCIALES = 3;
    int calificacion = 0;

    for (int estudiante = 1; estudiante <= ESTUDIANTES; estudiante++) {
        int total = 0;
        cout << "Estudiante " << estudiante << ": " << endl;
        for (int parcial = 1; parcial <= PARCIALES; parcial++) {
            cout << "\tParcial " << parcial << ": ";
            cin >> calificacion;
            total = total + calificacion;
        }
        double promedio = static_cast<double>(total) / PARCIALES;
        cout << "El promedio del estudiante " << estudiante << " es " << promedio << endl;
        cout << endl;
    }


    return 0;
}
