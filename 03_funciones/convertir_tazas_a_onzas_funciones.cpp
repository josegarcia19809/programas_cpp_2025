//
// Created by Jose Garcia on 25/04/25.
// convertir_tazas_a_onzas_funciones
// Este programa calcula cuántas onzas líquidas caben en un determinado número de tazas


#include <iostream>
#include <iomanip>
using namespace std;

// La función mostrarInfo() muestra una pantalla de introducción
void mostrarInfo() {
    cout << "Este programa convierte medidas de taza a onzas líquidas. \n"
            << "Para su referencia, la fórmula es: \n"
            << "  1 taza = 8 onzas líquidas\n\n";
}

// La función tazasAOnzas() acepta un número de tazas como parámetro y
// retorna el número equivalente de onzas líquidas como un double
double tazasAOnzas(double numTazas) {
    return numTazas * 8;
}

// La función obtenerTazas() le pide al usuario introducir el número de tazas
// y retorna el valor como un double
double obtenerTazas() {
    double numTazas;
    cout << "Ingresa el número de tazas: ";
    cin >> numTazas;
    return numTazas;
}


int main() {
    double tazas, onzas;

    // Configurar el formato de la salida numérica
    cout << fixed << showpoint << setprecision(1);

    mostrarInfo();

    tazas = obtenerTazas();

    onzas = tazasAOnzas(tazas);

    cout << tazas << " tazas son iguales a " << onzas << " onzas\n";

    return 0;
}
