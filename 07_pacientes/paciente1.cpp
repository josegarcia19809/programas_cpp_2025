//
// Created by Jose Garcia on 14/05/25.
//
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

struct Paciente {
    int idPaciente;
    string nombre;
    int edad;
    string diagnostico;
};

void pedirDatos();

void mostrarDatos();

void insertar(int, string, int, string);

void escribirEnArchivo();

void recuperarDeArchivo();

void crearArchivoSiNoExiste();

vector<string> dividirEnTokens(const string &linea, char delimitador);

Paciente paciente1;

int main() {
    crearArchivoSiNoExiste();
    pedirDatos();
    escribirEnArchivo();
    recuperarDeArchivo();

    return 0;
}

void pedirDatos() {
    int idx, edadx;
    string nombrex, diagnosticox;

    cout << "Dame datos del paciente" << endl;
    cout << "Dame su id: ";
    cin >> idx;
    cin.ignore();

    cout << "Dame su nombre: ";
    getline(cin, nombrex);

    cout << "Dame su edad: ";
    cin >> edadx;
    cin.ignore();

    cout << "Dame su diagnóstico: ";
    getline(cin, diagnosticox);

    insertar(idx, nombrex, edadx, diagnosticox);
}

void insertar(int idx, string nombrex, int edadx, string diagnosticox) {
    paciente1.idPaciente = idx;
    paciente1.nombre = nombrex;
    paciente1.edad = edadx;
    paciente1.diagnostico = diagnosticox;
}

void mostrarDatos() {
    cout << "................................" << endl;
    cout << "Datos del paciente" << endl;
    cout << "Id: " << paciente1.idPaciente << endl;
    cout << "Nombre: " << paciente1.nombre << endl;
    cout << "Edad: " << paciente1.edad << endl;
    cout << "Diagnóstico: " << paciente1.diagnostico << endl;
}


void crearArchivoSiNoExiste() {
    ifstream archivoExistente("pacientes.txt");
    if (!archivoExistente) {
        // El archivo no existe, lo creamos vacío
        ofstream nuevoArchivo("pacientes.txt", ios::out);
        if (!nuevoArchivo) {
            cerr << "No se pudo crear el archivo" << endl;
            exit(1);
        }
        cout << "Archivo creado" << endl;
    } else {
        cout << "El archivo ya existe" << endl;
    }
}


void escribirEnArchivo() {
    ofstream salidaArchivo("pacientes.txt", ios::out);
    if (!salidaArchivo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    salidaArchivo << paciente1.idPaciente << "|"
            << paciente1.nombre << "|"
            << paciente1.edad << "|"
            << paciente1.diagnostico << endl;
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

void recuperarDeArchivo() {
    ifstream lecturaArchivo("pacientes.txt");
    if (!lecturaArchivo) {
        cerr << "No se pudo leer el archivo" << endl;
        exit(1);
    }
    string linea;
    while (getline(lecturaArchivo, linea)) {
        vector<string> campos = dividirEnTokens(linea, '|');
        if (campos.size() == 4) {
            int idx = stoi(campos[0]);
            string nombrex = campos[1];
            int edadx = stoi(campos[2]);
            string diagnosticox = campos[3];
            insertar(idx, nombrex, edadx, diagnosticox);
            mostrarDatos();
        }
    }
}
