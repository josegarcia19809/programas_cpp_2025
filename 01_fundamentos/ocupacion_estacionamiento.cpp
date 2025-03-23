// Programa elaborado por José L García
// Fecha: 21 de marzo de 2025
// Este programa calcula la tasa de ocupación de un estacionamiento


#include <iostream>
using namespace std;

int main() {
    int niveles, espacios, ocupados;
    cout << "Ocupación de un estacionamiento" << endl;

    cout << "Dame número de niveles: ";
    cin >> niveles;

    if (niveles < 1) {
        cout << "El número de niveles no es válido" << endl;
        cout << "Vuelva a ejecutar el programa" << endl;
        return 0;
    }

    int totalEspacios = 0;
    int totalOcupados = 0;

    for (int i = 1; i <= niveles; ++i) {
        cout << endl;
        cout << "¿Cuántas espacios tiene el nivel #" << i << "? ";
        cin >> espacios;
        totalEspacios = totalEspacios + espacios;

        cout << "¿Cuántos espacios están ocupados? ";
        cin >> ocupados;
        totalOcupados += ocupados;
    }

    int totalDisponibles = totalEspacios - totalOcupados;
    double porcentajeOcupacion = totalOcupados * 100.0 / totalEspacios;

    cout << endl;
    cout << "Total de espacios: " << totalEspacios << endl;
    cout << "Total de espacios ocupados: " << totalOcupados << endl;
    cout << "Total de espacios disponibles: " << totalDisponibles << endl;
    cout << "Porcentaje de ocupación: " << porcentajeOcupacion << endl;
    

    return 0;
}
