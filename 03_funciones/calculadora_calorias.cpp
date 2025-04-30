//
// Created by Jose Garcia on 30/04/25.
//


#include <iostream>
#include <string>

using namespace std;

double obtenerPeso(const string &tipoAlimento) {
    double peso = -1;
    while (peso < 0) {
        cout << "Dame peso en libras de " << tipoAlimento << ": ";
        cin >> peso;

        if (peso < 0) {
            cout << "El peso debe ser cero o mayor. Intenta nuevamente." << endl;
        }
    }
    return peso;
}

double calcularCaloriasGrasa(double peso) {
    return peso * 4100;
}

double calcularCaloriasAzucar(double peso) {
    return peso * 936;
}

double calcularCaloriasMalas() {

    double pesoAzucar = obtenerPeso("Azúcar");
    double pesoGrasas = obtenerPeso("Grasas");

    double caloriasAzucar = calcularCaloriasAzucar(pesoAzucar);
    double caloriasGrasas = calcularCaloriasGrasa(pesoGrasas);

    double caloriasMalasTotales = caloriasAzucar + caloriasGrasas;
    return caloriasMalasTotales;
}

int main() {

    cout << "Calculadora de calorías malas" << endl;
    cout << "............................." << endl;

    double caloriasMalas = calcularCaloriasMalas();
    cout << "Calorías malas: " << caloriasMalas << endl;

    return 0;
}