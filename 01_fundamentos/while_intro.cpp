// Programa elaborado por José L García
// Fecha: 12 de marzo de 2025
// Este programa usa bucles while

#include <iostream>

using namespace std;

int main() {
    cout << "Del 1 al 5" << endl;
    int numero = 1;
    while (numero <= 5) {
        cout << numero << endl;
        numero++;
    }
    cout << "----------------" << endl;

    cout << "Del 1 al 50" << endl;
    cout << "----------------" << endl;

    cout << "Del 0 al 20" << endl;
    numero = 0;
    while (numero <= 20) {
        cout << numero << " ";
        numero++;
    }
    cout << endl;
    cout << "----------------" << endl;
    cout << "Del 20 al 25" << endl;
    cout << "Del 0 al 9" << endl;
    cout << "Del 10 al 10" << endl;
    cout << "Valores 1, 3, 5" << endl;
    numero = 1;
    while (numero <= 5) {
        cout << numero << " ";
        numero = numero + 2;
    }
    cout << "Valores 0, 2, 4, 6" << endl;
    
    cout << "5, 4, 3, 2, 1" << endl;
    numero = 5;
    while (numero >= 1) {
        cout << numero << " ";
        numero--;
    }

    return 0;
}



