//
// Created by Jose Garcia on 09/06/25.
//
#include <iostream>

using namespace std;

double suma(double a, double b, double c);

double resta(double d, double e);

double multiplicacion(double num1, double num2);

double division(double num1, double num2);

void menu();

int main() {
    int opcion;
    do {
        menu();
        cin >> opcion;
        switch (opcion) {
            case 1:
                double s1, s2, s3, resultadoSuma;
                cout << "suma de 3 numeros" << endl;
                cout << "ingresa el primer numero:" << endl;
                cin >> s1;
                cout << "ingresa el segundo numero:" << endl;
                cin >> s2;
                cout << "ingresa el tercer numero:" << endl;
                cin >> s3;
                resultadoSuma = suma(s1, s2, s3);
                cout << "el resultado es: " << resultadoSuma << endl;
                break;
            case 2:
                cout << "resta de 2 numeros" << endl;
                double r1, r2, resultadoResta;
                cout << "ingresa primer numero:" << endl;
                cin >> r1;
                cout << "ingresa el segundo numero" << endl;
                cin >> r2;
                resultadoResta = resta(r1, r2);
                cout << "el resultado es:" << resultadoResta << endl;
                break;
            case 3:
                cout << "la multiplicacion de 2 numeros " << endl;
                double m1, m2, resultadoMultiplicacion;
                cout << "ingresa primer numero:" << endl;
                cin >> m1;
                cout << "ingresa el segundo numero" << endl;
                cin >> m2;
                resultadoMultiplicacion = multiplicacion(m1, m2);
                cout << "el de la multiplicacion  es:" << resultadoMultiplicacion << endl;
                break;
            case 4:
                cout << "division  de 2 numero" << endl;
                double d1, d2, resultadoDivision;
                cout << "ingresa el primer numero: " << endl;
                cin >> d1;
                cout << "ingresa el segundo numero: " << endl;
                cin >> d2;
                resultadoDivision = division(d1, d2);
                cout << "el resultado de la division: " << resultadoDivision << endl;
                break;
            default:
                cout << "opcion no valida..." << endl;
                break;
        }
    } while (opcion != 5);
    return 0;
}

double suma(double a, double b, double c) {
    return a + b + c;
}

double resta(double r1, double r2) {
    return r1 - r2;
}

double multiplicacion(double m1, double m2) {
    return m1 * m2;
}

double division(double d1, double d2) {
    return d1 / d2;
}

void menu() {
    cout << "1.- suma" << endl;
    cout << "2.- resta" << endl;
    cout << "3.- multiplicacion" << endl;
    cout << "4.- division" << endl;
    cout << "5.- salir del programa" << endl;
    cout << "elige tu opcion" << endl;

}