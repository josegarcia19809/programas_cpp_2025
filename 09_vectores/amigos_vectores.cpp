//
// Created by Jose Garcia on 21/05/25.
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> amigos;
    int num_amigos;
    string nombreAmigo;

    cout << "¿Cuántos amigos tienes? ";
    cin >> num_amigos;
    cin.ignore();

    for (int i = 1; i <= num_amigos; i++) {
        cout << "Nombre del amigo #" << i << ": ";
        getline(cin, nombreAmigo);
        amigos.push_back(nombreAmigo);
    }

    cout << "---------------------------------------" << endl;
    cout << "Tus amigos son: " << endl;
    for (int i = 0; i < amigos.size(); i++) {
        cout << "- " << amigos[i] << endl;
    }
    return 0;
}