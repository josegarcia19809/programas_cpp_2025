/* Elaborado por José L. García: miércoles 7 de mayo de 2025
 * Este programa calcula el área de un rectángulo
 * Nombre: area_rectangulo
*/


#include <iostream>

using namespace std;

double obtenerLargo() {
    double largo = 0;
    while (largo <= 0) {
        cout << "Dame la largura del rectángulo: ";
        cin >> largo;
    }
    return largo;
}

double obtenerAncho() {
    double ancho = 0;
    while (ancho <= 0) {
        cout << "Dame la anchura del rectángulo: ";
        cin >> ancho;
    }
    return ancho;
}

double calcularArea(double largo, double ancho) {
    return largo * ancho;
}

void mostrarDatos(double largo, double ancho, double area) {
    cout << "....................................." << endl;
    cout << "Datos del rectángulo" << endl;
    cout << "Anchura: " << ancho << " unidades" << endl;
    cout << "Largura: " << largo << " unidades" << endl;
    cout << "Área: " << area << " unidades cuadradas" << endl;
    cout << "....................................." << endl;
}

int main() {
    cout << "Programa para calcular el área de un rectángulo" << endl;
    double largura = obtenerLargo();
    double anchura = obtenerAncho();

    double area = calcularArea(largura, anchura);
    mostrarDatos(largura, anchura, area);

    return 0;
}