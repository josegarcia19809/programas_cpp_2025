// Programa elaborado por José L García
// Fecha: 25 de febrero de 2025
// Este programa crea una variable por referencia

#include <iostream>
using namespace std;


int main() {
    int b = 10;
    int& ref_b = b; // crea un alias para la variable b
    cout <<"b: "<< b << endl;
    cout <<"ref_b: "<< ref_b << endl;

    ref_b++;
    cout <<"b: "<< b << endl;
    cout <<"ref_b: "<< ref_b << endl;

    return 0;
}
