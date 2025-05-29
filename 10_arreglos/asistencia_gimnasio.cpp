//
// Created by Jose Garcia on 28/05/25.
//


#include <iostream>
#include <string>

using namespace std;


int calcularTotalAsistencias(int asistencias[], int dias) {
    int total = 0;
    for (int i = 0; i < dias; ++i) {
        total += asistencias[i];
    }
    return total;
}

int diaMayorAsistencia(int asistencias[], int dias) {
    int indiceMaximo = 0;
    for (int i = 1; i < dias; ++i) {
        if (asistencias[i] > asistencias[indiceMaximo]) {
            indiceMaximo = i;
        }
    }
    return indiceMaximo;
}

int diaMenorAsistencia(int asistencias[], int dias) {
    int indiceMinimo = 0;
    for (int i = 1; i < dias; ++i) {
        if (asistencias[i] < asistencias[indiceMinimo]) {
            indiceMinimo = i;
        }
    }
    return indiceMinimo;
}


int main() {
    const int DIAS = 7;
    int asistencias[] = {20, 21, 22, 18, 15, 10, 2};
    string dias[DIAS] = {"domingo", "lunes", "martes", "miércoles", "jueves", "viernes",
                         "sábado"};

    cout << "--------------------------Gimnasio FuerzaFit" << endl;
    cout << "Control de asistencia semanal en un gimnasio" << endl;

    int totalAsistencias = calcularTotalAsistencias(asistencias, DIAS);
    int indiceDiaMax = diaMayorAsistencia(asistencias, DIAS);
    int indiceDiaMin = diaMenorAsistencia(asistencias, DIAS);

    cout << "Total de asistencias: " << totalAsistencias << endl;

    cout << "El día " << dias[indiceDiaMax] << " se tuvo un máximo de "
         << asistencias[indiceDiaMax] << " asistentes" << endl;

    cout << "El día " << dias[indiceDiaMin] << " se tuvo un mínimo de "
         << asistencias[indiceDiaMin] << " asistentes" << endl;

    return 0;
}