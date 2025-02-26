// Programa elaborado por José L García
// Fecha: 25 de febrero de 2025
// Este programa pasa un valor por referencia a una función

#include <iostream>
using namespace std;

void AddOne(int &num);

int main() {
    int a = 1;
    cout << a << endl;
    AddOne(a);
    cout << a << endl;

    return 0;
}

void AddOne(int &num) {
    num++;
}