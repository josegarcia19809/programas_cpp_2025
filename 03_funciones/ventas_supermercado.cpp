//
// Created by Jose Garcia on 09/06/25.
//


#include <iostream>

using namespace std;

float calcularSubtotal(float precio, int cantidad) {
    float subtotal = precio * cantidad;
    return subtotal;
}

float calcularIVA(float precio, int cantidad) {
    float iva = (precio * cantidad) * 0.16;
    return iva;
}

float calcularTotal(float precio, int cantidad) {
    float total = calcularSubtotal(precio, cantidad) + calcularIVA(precio, cantidad);
    return total;
}

int mostrarMenu() {
    cout << "1.- Calcular subtotal" << endl;
    cout << "2.- Calcular IVA" << endl;
    cout << "3.- Calcular total a pagar" << endl;
    cout << "4.- Salir del programa" << endl;
    int opcion = -1;
    while (opcion < 1) {
        cout << "Ingresa la opcion deseada: ";
        cin >> opcion;
    }
    return opcion;
}

int main() {
    float precioUnitario = -1;
    int cantidad = -1;
    float subtotal;
    float IVA;
    float totalApagar;
    while (precioUnitario < 0) {
        cout << "Ingresa el precio unitario del producto: ";
        cin >> precioUnitario;
    }
    while (cantidad < 0) {
        cout << "Ingresa la cantidad comprada por el cliente: ";
        cin >> cantidad;
    }
    int opcion;
    do {
        opcion = mostrarMenu();
        switch (opcion) {
            case 1:
                subtotal = calcularSubtotal(precioUnitario, cantidad);
                cout << "El subtotal es: " << subtotal << endl;
                break;
            case 2:
                IVA = calcularIVA(precioUnitario, cantidad);
                cout << "El iva es de: " << IVA << endl;
                break;
            case 3:
                totalApagar = calcularTotal(precioUnitario, cantidad);
                cout << "El total es de: " << totalApagar << endl;
                break;
            case 4:
                cout << "Saliendo del programa" << endl;
                break;
            default:
                cout << "Opción no válida..." << endl;
                break;
        }
    } while (opcion != 4);
    return 0;
}