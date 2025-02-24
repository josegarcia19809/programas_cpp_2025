// Programa elaborado por José L García
// Fecha: 24 de febrero de 2025
// Este programa calcula el total de ventas de un estadio

#include <iostream>
#include <iomanip> // Para usar fixed y setprecision

using namespace std;

int main() {
    cout << "--------------------------------------------------------------------------" << endl;
    // Definir los precios de los boletos
    const double PRECIO_BOLETO_CLASE_A = 15.00;
    const double PRECIO_BOLETO_CLASE_B = 12.00;
    const double PRECIO_BOLETO_CLASE_C = 9.00;

    // Declarar las variables para almacenar la cantidad de boletos vendidos de cada clase
    int cantidadBoletosA = 0;
    int cantidadBoletosB = 0;
    int cantidadBoletosC = 0;

    // Pedir al usuario la cantidad de boletos vendidos de cada clase
    cout << "Dame cantidad de boletos vendidos" << endl;
    cout << "De clase A: ";
    cin >> cantidadBoletosA;

    cout << "De clase B: ";
    cin >> cantidadBoletosB;

    cout << "De clase C: ";
    cin >> cantidadBoletosC;

    // Calcular los ingresos totales (precio de cada tipo * cantidad)
    double ingresosTotales = (PRECIO_BOLETO_CLASE_A * cantidadBoletosA) +
                             (PRECIO_BOLETO_CLASE_B * cantidadBoletosB) +
                             (PRECIO_BOLETO_CLASE_C * cantidadBoletosC);

    // Mostrar los ingresos totales con formato de moneda
    cout << "Ingresos totales: $" << fixed << setprecision(2) << ingresosTotales << endl;
    return 0;  // 120  150 100 4500.00
}
