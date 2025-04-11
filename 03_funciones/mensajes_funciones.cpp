//
// Created by Jose Garcia on 11/04/25.
//

#include <iostream>
using namespace std;

// Prototipos
void saludar();

void mostrarNombre();

int main() {
    cout << "Inicio de programa main----" << endl;
    saludar();
    cout << "----Fin de programa main" << endl;
    return 0;
}

void saludar() {
    cout << "Hola, buen día" << endl;
    mostrarNombre();
}

void mostrarNombre() {
    cout << "Mi nombre es José Luis García" << endl;
}
