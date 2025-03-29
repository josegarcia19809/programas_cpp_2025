//
// Created by Jose Garcia on 28/03/25.
/*  Este programa muestra un menú y le pide al usuario que haga una selección.
  Una declaración if / else if determina qué elemento ha elegido el usuario. */


#include <iostream>
#include <iomanip>

using namespace std;

void menu() {
    cout << "\n\nMenú de membresia del club de salud" << endl;
    cout << "1.- Membresía de adulto estandar" << endl;
    cout << "2.- Membresía de niños" << endl;
    cout << "3.- Membresía de adulto mayor" << endl;
    cout << "4.- Quitar el programa" << endl;
    cout << "Elige tu opción: ";
}

int main() {
    int opcion;
    int meses;
    double cargos;

    // Constantes para las tasas de membresia
    const double ADULTO = 40.0;
    const double MENOR = 20.0;
    const double PERSONA_MAYOR = 30.0;

    // Constantes para las opciones del menú
    const int OPCION_ADULTO = 1;
    const int OPCION_MENOR = 2;
    const int OPCION_PERSONA_MAYOR = 3;
    const int OPCION_SALIR = 4;

    do {
        menu();
        cin >> opcion;

        // Establecer el formato de salida numérico
        cout << fixed << showpoint << setprecision(2);

        if (opcion == OPCION_ADULTO) {
            cout << "¿Por cuántos meses quiere la membresía? ";
            cin >> meses;
            cargos = meses * ADULTO;
            cout << "Los cargos totales del paquete ADULTO son $" << cargos << endl;
        } else if (opcion == OPCION_MENOR) {
            cout << "¿Por cuántos meses quiere la membresía? ";
            cin >> meses;
            cargos = meses * MENOR;
            cout << "Los cargos totales del paquete NIÑO son $" << cargos << endl;
        } else if (opcion == OPCION_PERSONA_MAYOR) {
            cout << "¿Por cuántos meses quiere la membresía? ";
            cin >> meses;
            cargos = meses * PERSONA_MAYOR;
            cout << "Los cargos totales del paquete PERSONA MAYOR son $" << cargos << endl;
        } else if (opcion == OPCION_SALIR) {
            cout << "Finalizando programa" << endl;
        } else {
            cout << "Las opciones válidas son del 1 al 4\n"
                 << "Vuelva a ejecutar el programa y seleccione una de ellas" << endl;
        }
    } while (opcion != 4);

    return 0;
}