//
// Created by Jose Garcia on 16/05/25.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

struct PacienteVeterinario {
    int idPaciente;
    string nombre;
    string especie;
    int edad;
    string diagnostico;
};

const int NUMERO_PACIENTES = 10;
PacienteVeterinario pacientes[NUMERO_PACIENTES];

void mostrarDatos();

void insertar(int, string, string, int, string);

void recuperarDeArchivo();

void inicializar();

void crearArchivoSiNoExiste();

vector<string> dividirEnTokens(const string &linea, char delimitador);

void pedirDatos();

void escribirEnArchivo();

void menu();

void buscarPorEspecie(string especie);

void buscarPorNombre(string nombre);

void listarMayoresQueEdad(int edad);


int main() {
    inicializar();
    crearArchivoSiNoExiste();
    recuperarDeArchivo();
    mostrarDatos();
    string especie, nombre;
    int edad;
    int opcion;
    do {
        menu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                pedirDatos();
                escribirEnArchivo();
                mostrarDatos();
                break;
            case 2:
                mostrarDatos();
                break;

            case 3:
                cin.ignore();
                cout << "Dame la especie: ";
                getline(cin, especie);

                buscarPorEspecie(especie);
                break;

            case 4:
                cin.ignore();
                cout << "Dame el nombre: ";
                getline(cin, nombre);

                buscarPorNombre(nombre);
                break;
            case 5:
                cout << "Dame la edad, mostraré los mayores a dicha edad: ";
                cin >> edad;

                listarMayoresQueEdad(edad);
                break;
            case 6:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }

    } while (opcion != 6);


    return 0;
}

void inicializar() {
    for (int i = 0; i < NUMERO_PACIENTES; ++i) {
        pacientes[i].idPaciente = 0;
        pacientes[i].nombre = "";
        pacientes[i].especie = "";
        pacientes[i].edad = 0;
        pacientes[i].diagnostico = "";
    }
}

void mostrarDatos() {
    cout << endl;
    cout << setw(6) << "ID"
         << setw(15) << "NOMBRE"
         << setw(15) << "ESPECIE"
         << setw(8) << "EDAD"
         << setw(30) << "DIAGNÓSTICO" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    for (int i = 0; i < NUMERO_PACIENTES; ++i) {
        if (pacientes[i].idPaciente != 0) {
            cout << setw(6) << pacientes[i].idPaciente
                 << setw(15) << pacientes[i].nombre
                 << setw(15) << pacientes[i].especie
                 << setw(8) << pacientes[i].edad
                 << setw(30) << pacientes[i].diagnostico << endl;
        }
    }
}

void crearArchivoSiNoExiste() {
    ifstream archivoExistente("pacientes_veterinaria.txt");
    if (!archivoExistente) {
        // El archivo no existe, lo creamos vacío
        ofstream nuevoArchivo("pacientes_veterinaria.txt", ios::out);
        if (!nuevoArchivo) {
            cerr << "No se pudo crear el archivo" << endl;
            exit(1);
        }
        cout << "Archivo creado" << endl;
    } else {
        cout << "El archivo ya existe" << endl;
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

void recuperarDeArchivo() {
    ifstream lecturaArchivo("pacientes_veterinaria.txt");
    if (!lecturaArchivo) {
        cerr << "No se pudo leer el archivo" << endl;
        exit(1);
    }
    string linea;
    while (getline(lecturaArchivo, linea)) {
        vector<string> campos = dividirEnTokens(linea, '|');
        if (campos.size() == 5) {
            int idx = stoi(campos[0]);
            string nombrex = campos[1];
            string especiex = campos[2];
            int edadx = stoi(campos[3]);
            string diagnosticox = campos[4];
            insertar(idx, nombrex, especiex, edadx, diagnosticox);
        }
    }
}

int contador = 0;

void insertar(int idx, string nombrex, string especiex, int edadx, string diagnosticox) {
    pacientes[contador].idPaciente = idx;
    pacientes[contador].nombre = nombrex;
    pacientes[contador].especie = especiex;
    pacientes[contador].edad = edadx;
    pacientes[contador].diagnostico = diagnosticox;
    contador++;
}

void pedirDatos() {
    int idx, edadx;
    string nombrex, especiex, diagnosticox;

    cout << "Dame datos del paciente" << endl;

    cout << "Dame su id: ";
    cin >> idx;
    cin.ignore();

    cout << "Dame su nombre: ";
    getline(cin, nombrex);

    cout << "Dame su especie: ";
    getline(cin, especiex);

    cout << "Dame su edad: ";
    cin >> edadx;
    cin.ignore();

    cout << "Dame su diagnóstico: ";
    getline(cin, diagnosticox);

    insertar(idx, nombrex, especiex, edadx, diagnosticox);
}


void escribirEnArchivo() {
    ofstream salidaArchivo("pacientes_veterinaria.txt", ios::out);
    if (!salidaArchivo) {
        cerr << "No se pudo abrir el archivo" << endl;
        exit(1);
    }

    for (int i = 0; i < NUMERO_PACIENTES; ++i) {
        if (pacientes[i].idPaciente != 0) {
            salidaArchivo << pacientes[i].idPaciente << "|"
                          << pacientes[i].nombre << "|"
                          << pacientes[i].especie << "|"
                          << pacientes[i].edad << "|"
                          << pacientes[i].diagnostico << endl;
        }
    }
}

void menu() {
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Pacientes de una veterinaria" << endl;
    cout << "1.- Registrar nuevo paciente" << endl;
    cout << "2.- Mostrar pacientes" << endl;
    cout << "3.- Buscar pacientes por especie" << endl;
    cout << "4.- Buscar pacientes por nombre" << endl;
    cout << "5.- Listar pacientes con edad mayor a cierto valor." << endl;
    cout << "6.- Salir" << endl;
    cout << "Elige tu opción: ";
}


void buscarPorEspecie(string especie) {
    cout << endl;
    cout << setw(6) << "ID"
         << setw(15) << "NOMBRE"
         << setw(15) << "ESPECIE"
         << setw(8) << "EDAD"
         << setw(30) << "DIAGNÓSTICO" << endl;
    cout << "--------------------------------------------------------------------" << endl;
    for (int i = 0; i < NUMERO_PACIENTES; ++i) {
        if (pacientes[i].idPaciente != 0 &&
            pacientes[i].especie == especie) {
            cout << setw(6) << pacientes[i].idPaciente
                 << setw(15) << pacientes[i].nombre
                 << setw(15) << pacientes[i].especie
                 << setw(8) << pacientes[i].edad
                 << setw(30) << pacientes[i].diagnostico << endl;
        }
    }
}

void buscarPorNombre(string nombre) {
    cout << endl;
    cout << setw(6) << "ID"
         << setw(15) << "NOMBRE"
         << setw(15) << "ESPECIE"
         << setw(8) << "EDAD"
         << setw(30) << "DIAGNÓSTICO" << endl;
    cout << "----------------------------------------------------------------" << endl;
    for (int i = 0; i < NUMERO_PACIENTES; ++i) {
        if (pacientes[i].idPaciente != 0 &&
            pacientes[i].nombre == nombre) {
            cout << setw(6) << pacientes[i].idPaciente
                 << setw(15) << pacientes[i].nombre
                 << setw(15) << pacientes[i].especie
                 << setw(8) << pacientes[i].edad
                 << setw(30) << pacientes[i].diagnostico << endl;
        }
    }
}

void listarMayoresQueEdad(int edad) {
    cout << endl;
    cout << setw(6) << "ID"
         << setw(15) << "NOMBRE"
         << setw(15) << "ESPECIE"
         << setw(8) << "EDAD"
         << setw(30) << "DIAGNÓSTICO" << endl;
    cout << "---------------------------------------------------------------------" << endl;
    for (int i = 0; i < NUMERO_PACIENTES; ++i) {
        if (pacientes[i].idPaciente != 0 &&
            pacientes[i].edad > edad) {
            cout << setw(6) << pacientes[i].idPaciente
                 << setw(15) << pacientes[i].nombre
                 << setw(15) << pacientes[i].especie
                 << setw(8) << pacientes[i].edad
                 << setw(30) << pacientes[i].diagnostico << endl;
        }
    }
}
