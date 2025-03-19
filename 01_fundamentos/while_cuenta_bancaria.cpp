// Programa elaborado por José L García
// Fecha: 14 de marzo de 2025
// Este programa pedirá depósitos y retiros mensuales de una cuenta bancaria


#include <iostream>
using namespace std;

int main() {
    double balanceInicial = 0;
    double totalDepositos = 0;
    double totalRetiros = 0;
    double balanceFinal;
    double deposito, retiro;

    cout << "Dame balance inicial: ";
    cin >> balanceInicial;

    int mes = 1;
    while (mes <= 6) {
        cout << "Dame depósito #" << mes << ": ";
        cin >> deposito;
        totalDepositos = totalDepositos + deposito;
        mes++;
    }
    cout << "Total de depósitos: " << totalDepositos << endl;

    mes = 1;
    while (mes <= 6) {
        cout << "Dame retiro #" << mes << ": ";
        cin >> retiro;
        totalRetiros = totalRetiros + retiro;
        mes++;
    }
    cout << "Total de retiros: " << totalRetiros << endl;
    cout << endl;

    balanceFinal = balanceInicial + totalDepositos - totalRetiros;
    cout << "El balance final es de " << balanceFinal << endl;


    return 0;
}
