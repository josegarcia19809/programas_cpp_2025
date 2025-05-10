//
// Created by Jose Garcia on 09/05/25.
// Programa que realiza conversiones de distancias


#include <iostream>
using namespace std;

// Prototipos de función
void mostrarKilometros(double metros);

void mostrarPulgadas(double metros);

void mostrarPies(double metros);

void menu();

int main() {
    int opcion;
    double metros = -1;
    do {
        menu();
        cin >> opcion;

        if (opcion == 1 || opcion == 2 || opcion == 3) {
            do {
                cout << "Dame la distancia en metros: ";
                cin >> metros;

                if (metros < 0) {
                    cout << "La distancia no debe ser negativa 👎🏻" << endl;
                    cout << "Ingresa nuevamente el dato" << endl;
                }
            } while (metros < 0);
        }

        switch (opcion) {
            case 1:
                mostrarKilometros(metros);
                break;
            case 2:
                mostrarPulgadas(metros);
                break;
            case 3:
                mostrarPies(metros);
                break;
            case 4:
                cout << "Saliendo... 👋🏻" << endl;
                break;
            default:
                cout << "La opción no es válida. Intenta nuevamente" << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}

void mostrarKilometros(double metros) {
    double kilometros = metros * 0.001;
    cout << metros << " metros equivale a " << kilometros << " kilometros" << endl;
}

void mostrarPulgadas(double metros) {
    double pulgadas = metros * 39.37;
    cout << metros << " metros equivale a " << pulgadas << " pulgadas" << endl;
}

void mostrarPies(double metros) {
    double pies = metros * 3.281;
    cout << metros << " metros equivale a " << pies << " pies" << endl;
}

void menu() {
    cout << "\n.............................................." << endl;
    cout << "Conversor de distancias" << endl;
    cout << "1.- Convertir a kilometros" << endl;
    cout << "2.- Convertir a pulgadas" << endl;
    cout << "3.- Convertir a pies" << endl;
    cout << "4.- Salir del programa" << endl;
    cout << "Elige tu opción: ";
}
