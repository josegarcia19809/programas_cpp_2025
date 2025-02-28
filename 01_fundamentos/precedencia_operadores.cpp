// Programa elaborado por José L García
// Fecha: 28 de febrero de 2025
// Este programa muestra las reglas de prioridad de los operadores aritméticos

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "(3 + 6 * 14): " << (3 + 6 * 14) << endl;
    cout << "(8 + 7 * 3 + 4 * 6): " << (8 + 7 * 3 + 4 * 6) << endl;
    cout << "( -4 * 7 + 2 ^ 3 / 4 - 5): " << (-4 * 7 + pow(2, 3) / 4 - 5) << endl;
    return 0;
}
