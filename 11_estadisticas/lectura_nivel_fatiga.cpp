//
// Created by Jose Garcia on 31/05/25.
//

#include <iostream>
using namespace std;

int main() {
    int numLista = 1;
    int contador = 1;
    int bajaFatiga = 0, pocasPaginas = 0;
    float sumaPaginasBajaFatiga = 0;
    float sumaFatigaTotal = 0;
    float promedioPaginas = 0, promedioFatiga = 0;

    while (contador <= 6) {
        int paginas = numLista + contador + 5;
        int fatiga = numLista + (contador * 3) + 20;

        if (fatiga < 50) {
            bajaFatiga++;
            sumaPaginasBajaFatiga += paginas;
        }

        if (paginas < 20) {
            pocasPaginas++;
        }

        sumaFatigaTotal += fatiga;
        contador++;
    }

    if (bajaFatiga > 0) {
        promedioPaginas = sumaPaginasBajaFatiga / bajaFatiga;
    } else {
        promedioPaginas = 0;
    }

    promedioFatiga = sumaFatigaTotal / 6;

    cout << "Días con baja fatiga visual: " << bajaFatiga << endl;
    cout << "Días con pocas páginas leídas: " << pocasPaginas << endl;
    cout << "Promedio de páginas (baja fatiga): " << promedioPaginas << endl;
    cout << "Promedio general de fatiga visual: " << promedioFatiga << endl;

    return 0;
}
