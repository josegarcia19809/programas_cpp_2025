//
// Created by Jose Garcia on 11/04/25.
//

#include <iostream>
using namespace std;

// Crear los prototipos de funciones
int sumar(int num1, int num2);

double restar(double num1, double num2);

int multiplicar(int num1, int num2);

float dividir(float num1, double num2);

int main() {
    int miSuma = sumar(5, 6);
    cout << "La suma de 5 y 6 es " << miSuma << endl;

    double miResta = restar(5.0, 6.0);
    cout << "La resta de 5 y 6 es " << miResta << endl;

    int miProducto = multiplicar(5, 6);
    cout << "La multiplicación de 5 por 6 es " << miProducto << endl;

    float miDivision = dividir(5.0, 6.0);
    cout << "La división de 5 entre 6 es " << miDivision << endl;


    return 0;
} // fin de main

int sumar(int num1, int num2) {
    int resultado = num1 + num2;
    return resultado;
}

double restar(double num1, double num2) {
    return num1 - num2;
}

int multiplicar(int num1, int num2) {
    return num1 * num2;
}

float dividir(float num1, float num2) {
    return num1 / num2;
}
