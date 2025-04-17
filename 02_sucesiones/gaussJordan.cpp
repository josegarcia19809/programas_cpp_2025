//
// Created by Jose Garcia on 17/04/25.
//
#include <iostream>
#include <iomanip>  // <- Librería para setprecision
using namespace std;

const int N = 3;

void imprimirMatriz(float A[N][N + 1]) {
    cout << "-----------------------------------------------------------" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N + 1; ++j) {
            cout << fixed << setprecision(2) << "\t\t" << A[i][j];
        }
        cout << endl;
    }
    cout << "-----------------------------------------------------------" << endl;
}

void gaussJordan(float A[N][N + 1]) {
    for (int i = 0; i < N; i++) {
        // Normalizar la fila i
        float divisor = A[i][i];
        for (int j = 0; j <= N; j++) {
            A[i][j] /= divisor;
        }
        imprimirMatriz(A);
        // Eliminar los demás elementos en la columna i
        for (int k = 0; k < N; k++) {
            if (k != i) {
                float factor = A[k][i];
                for (int j = 0; j <= N; j++) {
                    A[k][j] -= factor * A[i][j];
                }
            }
        }
        imprimirMatriz(A);
    }

    // Mostrar resultados
    for (int i = 0; i < N; i++) {
        cout << fixed << setprecision(2) << "x" << i + 1 << " = " << A[i][N] << endl;
    }
}

int main() {
    float A[N][N + 1] = {
        {2, 1, 3, 22},
        {1, 2, 2, 18},
        {3, 2, 1, 17}
    };
    imprimirMatriz(A);
    gaussJordan(A);

    return 0;
}

