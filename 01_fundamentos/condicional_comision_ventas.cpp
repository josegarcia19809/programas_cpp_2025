// Programa elaborado por José L García
// Fecha: 7 de marzo de 2025
// Este programa muestra las ganancias de un vendedor con comisiones

#include <iostream>
using namespace std;

int main() {
    const double SALARIO_BASE = 200;

    const double PRECIO_1 = 240.00;
    const double PRECIO_2 = 130.00;
    const double PRECIO_3 = 99.50;
    const double PRECIO_4 = 350.10;

    const int PORCENTAJE_COMISION_VENTAS = 10;

    int cantidad1 = 0, cantidad2 = 0, cantidad3 = 0, cantidad4 = 0;
    cout << "Dime la cantidad vendida de cada artículo" << endl;

    cout << "Artículo 1: ";
    cin >> cantidad1;

    cout << "Artículo 2: ";
    cin >> cantidad2;

    cout << "Artículo 3: ";
    cin >> cantidad3;

    cout << "Artículo 4: ";
    cin >> cantidad4;

    double totalVentas = (PRECIO_1 * cantidad1) + (PRECIO_2 * cantidad2) +
                         (PRECIO_3 * cantidad3) + (PRECIO_4 * cantidad4);

    double comisionPorVentas = totalVentas * (PORCENTAJE_COMISION_VENTAS / 100.0);

    cout << "El vendedor ganará " << (SALARIO_BASE + comisionPorVentas) << endl;

    if (totalVentas == 0) {
        cout << "Este vendedor no vende" << endl;
    }

    return 0;
}


/*
 *
*A cada vendedor se les paga $200

10% de comisión por sus ventas

--------------------------------------

1     240.00    3    720

2     130.00    2    260

3     99.50     0      0

4     350.10    1    350.10

        ¿Cuánto vendió en total? 1330.10
        ¿Cuánto recibe de comisión? 133.01

        ¿Cuánto recibe el vendedor en total? 333.01
 **/