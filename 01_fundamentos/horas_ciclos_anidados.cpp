//
// Created by Jose Garcia on 04/04/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << right;
    cout.fill('0');
    int contador=0;
    for (int horas = 0; horas <= 23; horas++) {
        for (int minutos = 0; minutos <= 59; minutos++) {
            for (int segundos = 0; segundos <= 59; segundos++) {
                cout << setw(2) << horas << ":";
                cout << setw(2) << minutos << ":";
                cout << setw(2) << segundos;
                cout << endl;
                contador++;
            }
        }
    }
    cout<<contador<<endl;


    return 0;
}
