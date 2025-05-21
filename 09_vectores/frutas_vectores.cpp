//
// Created by Jose Garcia on 21/05/25.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> frutas;

    frutas.push_back("Papaya");
    frutas.push_back("Fresa");
    frutas.push_back("Mamey");
    frutas.push_back("Platano");

    frutas[0] = "Melón";
    // Mostrar todos los elementos
    for (int i = 0; i < frutas.size(); i++) {
        cout << frutas[i] << endl;
    }

    cout << "----------------------------" << endl;
    for (const string &fruta: frutas) {
        cout << fruta << endl;
    }

    return 0;
}