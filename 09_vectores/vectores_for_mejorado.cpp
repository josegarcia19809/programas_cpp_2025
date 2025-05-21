//
// Created by Jose Garcia on 21/05/25.
//


#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros{10, 20, 30, 40, 50};

    // Visualizando los valores con un for mejorado
    for (int valor: numeros) {
        cout << valor << " ";
    }

    cout << endl;
    return 0;
}