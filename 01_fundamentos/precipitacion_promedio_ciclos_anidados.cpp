//
// Created by Jose Garcia on 04/04/25.
// Programa para calcular la precipitación promedio durante un período de años


#include <iostream>

using namespace std;

int main() {
    int num_anios = 0;
    double promedioLluvia = 0.0;

    string meses[] = {
            "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto",
            "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    cout << "Ingrese el número de años: ";
    cin >> num_anios;

    if (num_anios < 1) {
        cout << "Número de años no válido. Debe ser mayor que cero" << endl;
        cout << "Ejecute el programa nuevamente" << endl;
        return -1;
    }

    double totalLluvia = 0;
    double pulgadasLluvia;
    cout << "Ingresa las pulgadas de lluvia" << endl;

    // Bucle externo para los años
    for (int anio = 1; anio <= num_anios; anio++) {
        cout << "Del año " << anio << endl;

        // Bucle interno para los meses
        for (int mes = 1; mes <= 12; mes++) {
            cout << "\t" << meses[mes - 1] << ": ";
            cin >> pulgadasLluvia;

            totalLluvia = totalLluvia + pulgadasLluvia;
        }
        cout << endl;
    }
    int totalMeses = num_anios * 12;
    promedioLluvia = totalLluvia / totalMeses;

    // Mostrar resultados
    cout << "Número total de meses: " << totalMeses << endl;
    cout << "Total de pulgadas de lluvia: " << totalLluvia << endl;
    cout << "Precipitación promedio durante todo el periodo: " << promedioLluvia
         << " pulgadas" << endl;

    return 0;
}
