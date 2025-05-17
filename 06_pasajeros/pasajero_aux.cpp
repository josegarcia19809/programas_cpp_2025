//
// Created by Jose Garcia on 13/05/25.
//
//  Created by: Ing. José L. García M. on 6 de mayo de 2022, 08:24
/*
    Este programa crea una estructura para guardar los datos de un pasajero
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

struct Pasajero {
    int clave;
    string nombre;
    string origen;
    string destino;
    double pasaje;
};

void pedirDatos();

void mostrarDatos();

void insertar(int, string, string, string, double);

void escribirEnArchivo();

void recuperarDeArchivo();

void crearArchivoSiNoExiste();

vector<string> dividirEnTokens(const string &linea, char delimitador);

Pasajero p1;

int main() {
    // crearArchivoSiNoExiste();
    // pedirDatos();
    // escribirEnArchivo();
    recuperarDeArchivo();
    //mostrarDatos();

    return 0;
} // fin de main

void pedirDatos() {
    int clavex;
    string nombrex, origenx, destinox;
    double pasajex;
    cout << "Escribe los datos del pasajero: " << endl;
    cout << "Dame clave: ";
    cin >> clavex;
    cout << "Dame nombre: ";
    getline(cin, nombrex);
    // Suele aumentarse un getline si no pide el nombre
    getline(cin, nombrex);
    cout << "Dame origen: ";
    getline(cin, origenx);
    cout << "Dame destino: ";
    getline(cin, destinox);
    cout << "Dame costo del pasaje: ";
    cin >> pasajex;
    insertar(clavex, nombrex, origenx, destinox, pasajex);
} // fin de pedirDatos

void insertar(int clavex, string nombrex, string origenx, string destinox, double pasajex) {
    p1.clave = clavex;
    p1.nombre = nombrex;
    p1.origen = origenx;
    p1.destino = destinox;
    p1.pasaje = pasajex;
} // fin de insertar

void mostrarDatos() {
    cout << "..........................." << endl;
    cout << "Datos del pasajero" << endl;
    cout << "Clave: " << p1.clave << endl;
    cout << "Nombre: " << p1.nombre << endl;
    cout << "Origen: " << p1.origen << endl;
    cout << "Destino: " << p1.destino << endl;
    cout << "Pasaje: " << p1.pasaje << endl;
}

void recuperarDeArchivo() {
    ifstream lecturaArchivo("pasajeros.txt");
    if (!lecturaArchivo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    string linea;
    while (getline(lecturaArchivo, linea)) {
        vector<string> campos = dividirEnTokens(linea, '|');

        if (campos.size() == 5) {
            int clavex = stoi(campos[0]);
            string nombrex = campos[1];
            string origenx = campos[2];
            string destinox = campos[3];
            double pasajex = stod(campos[4]);

            insertar(clavex, nombrex, origenx, destinox, pasajex);
            mostrarDatos();
        }
    }
}

void escribirEnArchivo() {
    ofstream salidaArchivo("pasajeros.txt", ios::out);
    if (!salidaArchivo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    salidaArchivo << p1.clave << "|"
            << p1.nombre << "|"
            << p1.origen << "|"
            << p1.destino << "|"
            << p1.pasaje << endl;
}

void crearArchivoSiNoExiste() {
    ifstream archivoExistente("pasajeros.txt");
    if (!archivoExistente) {
        // El archivo no existe, lo creamos vacío
        ofstream nuevoArchivo("pasajeros.txt", ios::out);
        if (!nuevoArchivo) {
            cerr << "No se pudo crear el archivo" << endl;
            exit(1);
        }
        cout << "Archivo creado" << endl;
    } else {
        cout << "El Archivo ya existe" << endl;
    }
}


vector<string> dividirEnTokens(const string &linea, char delimitador) {
    vector<string> tokens;
    stringstream ss(linea);
    string token;
    while (getline(ss, token, delimitador)) {
        tokens.push_back(token);
    }
    return tokens;
}
