// Programa elaborado por José L García
// Fecha: 14 de marzo de 2025
// Este programa realiza una encuesta sobre helados de limón


#include <iostream>
using namespace std;

int main() {
    cout << "Encuesta sobre helados" << endl;

    char respuesta;

    int vecesSi = 0;

    int contador = 1;
    while (contador <= 3) {
        cout << "¿Te gusta el helado de limón? (S o N): ";
        cin >> respuesta;

        if (respuesta == 'S' || respuesta == 's') {
            vecesSi++;
        }
        contador++;
    }

    cout << vecesSi << " eligieron helado de limón" << endl;

    return 0;
}
