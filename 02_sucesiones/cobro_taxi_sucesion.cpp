//
// Created by Jose Garcia on 06/04/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Tabla de costos del recorrido en Blue Taxi\n";
    cout << "------------------------------------------\n";
    cout << setw(10) << "Millas" << setw(15) << "Costo ($)" << endl;
    cout << "------------------------------------------\n";

    for (int milla = 1; milla <= 10; milla++) {
        double costo = 1 + 0.5 * (milla - 1);
        cout << setw(10) << milla << setw(15) << fixed << setprecision(2) << costo << endl;
    }

    return 0;
}
