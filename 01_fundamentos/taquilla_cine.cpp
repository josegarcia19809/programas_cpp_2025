// Programa elaborado por José L García
// Fecha: 24 de febrero de 2025
// Programa para calcular las ganancias de un cine y lo que le paga a su proveedor

#include <iostream>
#include <iomanip> // Para usar fixed y setprecision

using namespace std;

int main() {
    cout << "--------------------------------------------------------------------------" << endl;
    // Definir los precios de los boletos y porcentajes de ganancias
    const double PRECIO_ADULTO = 10.00;
    const double PRECIO_NINO = 6.00;

    const double PORCENTAJE_CINE = 0.20;
    const double PORCENTAJE_DISTRIBUIDOR = 0.80;

    // Declarar variables para guardar cantidad de boletos de niños y adultos y el nombre de
    // la película
    string nombrePelicula;
    int entradasAdulto = 0, entradasNino = 0;

    // Pedir al usuario la cantidad de boletos vendidos de niños y adultos y el nombre de
    // la película
    cout << "Nombre de la película: ";
    getline(cin, nombrePelicula);

    cout << "Entradas para adultos vendidas: ";
    cin >> entradasAdulto;

    cout << "Entradas para niños vendidas: ";
    cin >> entradasNino;

    // Calcular ganancia bruta y neta de taquilla
    double gananciaBruta = (entradasAdulto * PRECIO_ADULTO) + (entradasNino * PRECIO_NINO);
    double gananciaNeta = gananciaBruta * PORCENTAJE_CINE;
    double montoDistribuidor = gananciaBruta * PORCENTAJE_DISTRIBUIDOR;

    // Mostrar el informe
    cout << "Nombre de la película: \t\t\t" << nombrePelicula << endl;
    cout << "Entradas para adultos vendidas: \t\t" << entradasAdulto << endl;
    cout << "Entradas para niños vendidas: \t\t" << entradasNino << endl;
    cout << "Ganancia bruta de taquilla: \t\t$" << fixed << setprecision(2)
         << gananciaBruta << endl;
    cout << "Ganancia neta de taquilla: \t\t$" << fixed << setprecision(2)
         << gananciaNeta << endl;
    cout << "Monto pagado al distribuidor: \t\t$" << fixed << setprecision(2)
         << montoDistribuidor << endl;

    return 0;
}
