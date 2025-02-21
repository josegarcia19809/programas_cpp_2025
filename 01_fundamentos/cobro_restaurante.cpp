// Programa elaborado por José L García
// Fecha: 21 de febrero de 2025
// Este programa calcula el cobro total de un restaurante

#include <iostream>
using namespace std;

int main()
{
    // Definir el cargo por la comida
    double costoComida = 88.00;

    // Definir el porcentaje de la propina
    double porcentajePropina = 20 / 100.0;

    // Calcular el monto de la propina
    double propina = costoComida * porcentajePropina;

    // Calcular la factura total (Sumar el cargo y la propina)
    double facturaTotal = costoComida + propina;

    // Mostrar los resultados (costo de la comida, propina, factura_total)
    cout << "Costo de la comida: $" << costoComida << endl;
    cout << "Propina: $" << propina << endl;
    cout << "Pago total: $" << facturaTotal << endl;

    return 0;
}




