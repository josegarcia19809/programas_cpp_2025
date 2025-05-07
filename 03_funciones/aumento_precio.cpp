//
// Created by Jose Garcia on 07/05/25.
//

#include <iostream>

using namespace std;

double calcularPrecioVenta(double costoMayoreo, int porcentajeAumento) {
    double aumento = costoMayoreo * (porcentajeAumento / 100.0);
    double costoMenudeo = costoMayoreo + aumento;
    return costoMenudeo;
}

int main() {

    // Valida que el costoMayoreo no sea negativo
    double costoMayoreo = -1;
    while (costoMayoreo < 0) {
        cout << "Ingresa el costo al mayoreo: ";
        cin >> costoMayoreo;
    }

    // Validar que ese porcentaje no sea negativo
    int porcentajeAumento = -1;
    while (porcentajeAumento < 0) {
        cout << "Dame porcentaje de aumento: ";
        cin >> porcentajeAumento;
    }

    // Mostrar el precio al menudeo
    double precioMenudeo = calcularPrecioVenta(costoMayoreo, porcentajeAumento);
    cout << "El precio al menudeo es de $" << precioMenudeo << " pesos" << endl;

    return 0;
}