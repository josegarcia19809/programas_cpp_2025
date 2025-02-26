// Programa elaborado por José L García
// Fecha: 25 de febrero de 2025
// Este programa crea una variable por referencia de tipo string

#include <iostream>
#include <string>
using namespace std;


int main() {
    string asignatura = "Algoritmos";
    const string &materia = asignatura;

    cout << "asignatura: " << asignatura << endl;
    cout << "materia: " << materia << endl;

    asignatura += " Computacionales";
    cout << "asignatura: " << asignatura << endl;
    cout << "materia: " << materia << endl;

    return 0;
}
