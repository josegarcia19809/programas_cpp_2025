//
// Created by Jose Garcia on 30/04/25.
//

#include <iostream>
#include <string>

using namespace std;

int obtenerNumAccidentes(const string &region) {
    int accidentes = -1;
    while (accidentes < 0) {
        cout << "Dame número de accidentes de la región " << region << ": ";
        cin >> accidentes;
    }
    return accidentes;
}

void encontrarMenor(int norte, int sur, int este, int oeste, int central) {
    string regionMasSegura = "Norte";
    int cantidadMenorAccidentes = norte;

    if (sur < cantidadMenorAccidentes) {
        regionMasSegura = "Sur";
        cantidadMenorAccidentes = sur;
    }

    if (este < cantidadMenorAccidentes) {
        regionMasSegura = "Este";
        cantidadMenorAccidentes = este;
    }

    if (oeste < cantidadMenorAccidentes) {
        regionMasSegura = "Oeste";
        cantidadMenorAccidentes = oeste;
    }

    if (central < cantidadMenorAccidentes) {
        regionMasSegura = "Central";
        cantidadMenorAccidentes = central;
    }

    cout << "La región mas segura es la " << regionMasSegura << " con "
         << cantidadMenorAccidentes
         << " accidentes" << endl;

}

int main() {
    int accidentesNorte = obtenerNumAccidentes("Norte");
    int accidentesSur = obtenerNumAccidentes("Sur");
    int accidentesEste = obtenerNumAccidentes("Este");
    int accidentesOeste = obtenerNumAccidentes("Oeste");
    int accidentesCentral = obtenerNumAccidentes("Central");

    encontrarMenor(accidentesNorte, accidentesSur, accidentesEste, accidentesOeste,
                   accidentesCentral);

    return 0;
}