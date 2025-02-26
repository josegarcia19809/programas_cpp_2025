// Programa elaborado por José L García
// Fecha: 25 de febrero de 2025
// Este programa usa una función que recibe variable por referencia de tipo string

#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string &s);

int main() {
    string asignatura = "Algoritmos";

    cout << "asignatura: " << asignatura << endl;
    ChangeStr(asignatura);
    // ChangeStr("asignatura"); Error, no se puede mandar directamente

    cout << "asignatura: " << asignatura << endl;

    return 0;
}

void ChangeStr(string &s) {
    s += " Computacionales";
}
