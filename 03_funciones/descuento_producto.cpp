//
// Created by Jose Garcia on 11/04/25.
//


#include <iostream>
using namespace std;

/**
 * @brief Calcula el precio final de un producto después de aplicar un descuento.
 *
 * @param precioOriginal [in] El precio original del producto (debe ser un valor no negativo).
 * @param porcentajeDescuento [in] El porcentaje de descuento a aplicar (un valor entre 0.0 y 100.0).
 * @return El precio del producto después de aplicar el descuento.

 * @author Jose Garcia
 * @date 2025-04-11
 */
double calcularPrecioConDescuento(double precioOriginal, double porcentajeDescuento) {
    double descuento = precioOriginal * porcentajeDescuento / 100.00;
    double precioConDescuento = precioOriginal - descuento;
    return precioConDescuento;
}

int main() {
    cout << "-------------DESCUENTO DE UN PRODUCTO-------------" << endl;
    double precioProducto, descuentoAplicado;

    cout << "Dame el precio original del producto: ";
    cin >> precioProducto;

    cout << "Dame el descuento que se le aplicará al producto: ";
    cin >> descuentoAplicado;

    double precioTotal = calcularPrecioConDescuento(precioProducto, descuentoAplicado);
    cout << "El precio del producto con descuento es " << precioTotal
            << " pesos" << endl;

    return 0;
}
