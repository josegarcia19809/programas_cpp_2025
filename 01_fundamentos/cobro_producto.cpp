// Programa elaborado por José L García
// Fecha: 21 de febrero de 2025
// Este programa calcula el cobro total de un producto
#include <iostream>
using namespace std;

int main()
{
    cout << "------------------------------------------------" << endl;
    // Definir el costo del producto
    double costoProducto = 95.0;

    // Definir los porcentajes estatal y nacional
    double porcentajeImpuestoEstatal = 0.04;
    double porcentajeImpuestoNacional = 0.02;

    // Calcular los impuestos estatal y nacional
    double impuestoEstatal = costoProducto * porcentajeImpuestoEstatal;
    double impuestoNacional = costoProducto * porcentajeImpuestoNacional;

    // Calcular el cobro total (Costo del producto + Impuesto estatal + Impuesto nacional)
    double cobroTotal = costoProducto + impuestoEstatal + impuestoNacional;
    
    // Mostrar el cobro total
    cout << "Cobro total: $" << cobroTotal << endl;
    return 0;
}



