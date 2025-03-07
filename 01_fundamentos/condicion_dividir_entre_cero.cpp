// Programa elaborado por José L García
// Fecha: 7 de marzo de 2025
// Este programa es para dividir un número entre otro
// Si el segundo número es cero mandará un mensaje de error

#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Dame un número: ";
    cin >> num1;

    cout << "Dame otro numero: ";
    cin >> num2;

    // Determinar si puede ocurrir una división entre cero
    if (num2 == 0) {
        // Error--- División entre cero
        cout << "No existe la división entre cero" << endl;
        cout << "Por favor, ejecute el programa nuevamente" << endl;
        cout << "Y escriba un segundo número diferente de cero" << endl;
    } else {
        // Realizar la división y mostrar el resultado
        float resultado = num1 / num2;
        cout << "El resultado es: " << resultado << endl;
    }
    return 0;
}
