//
// Created by Jose Garcia on 28/05/25.
//

#include <iostream>
#include <iomanip>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()

using namespace std;

void llenarArregloTemperaturas(double temperaturas[], int dias) {
    // Semilla para generar números aleatorios diferentes cada vez
    srand(time(0));
    // Llenar el arreglo con valores aleatorios entre 0 y 100
    for (int i = 0; i < dias; ++i) {
        temperaturas[i] = rand() % 10000 / 100.00;
    }
}

void mostrarTemperaturas(double temperaturas[], int dias) {
    cout << "Temperaturas de 30 días" << endl;
    for (int i = 0; i < dias; ++i) {
        cout << temperaturas[i] << "\t\t";
        if ((i + 1) % 7 == 0)cout << endl;
    }
    cout << endl;
}

double calcularPromedioTemperaturas(double temperaturas[], int dias) {
    double total = 0;
    for (int i = 0; i < dias; ++i) {
        total += temperaturas[i];
    }
    double promedio = total / dias;
    return promedio;
}

int diaMayorTemperatura(double temperaturas[], int dias) {
    int indiceMaximo = 0;
    for (int i = 1; i < dias; ++i) {
        if (temperaturas[i] > temperaturas[indiceMaximo]) {
            indiceMaximo = i;
        }
    }
    return indiceMaximo;
}

int diaMenorTemperatura(double temperaturas[], int dias) {
    int indiceMinimo = 0;
    for (int i = 1; i < dias; ++i) {
        if (temperaturas[i] < temperaturas[indiceMinimo]) {
            indiceMinimo = i;
        }
    }
    return indiceMinimo;
}

int main() {
    const int DIAS = 30;
    double temperaturas[DIAS];

    cout << "-----------------------AgroTech Solutions" << endl;
    cout << "Control de temperatura en un invernadero " << endl;

    cout << fixed << setprecision(2);
    llenarArregloTemperaturas(temperaturas, DIAS);
    mostrarTemperaturas(temperaturas, DIAS);

    double promedioTemperatura = calcularPromedioTemperaturas(temperaturas, DIAS);
    int indiceDiaMax = diaMayorTemperatura(temperaturas, DIAS);
    int indiceDiaMin = diaMenorTemperatura(temperaturas, DIAS);

    cout << endl;

    cout << "Promedio de temperaturas: "
         << promedioTemperatura << endl;

    cout << "Máxima temperatura " << temperaturas[indiceDiaMax] << endl;

    cout << "Mínima temperatura " << temperaturas[indiceDiaMin] << endl;

    return 0;
}