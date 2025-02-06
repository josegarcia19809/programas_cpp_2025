/* Elaborado por José L. García: viernes 8 de febrero de 2025
 * Este programa
 * Nombre:
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number1{0};
    int number2{0};

    int sum{0};
    std::cout << "C++ Standard: " << __cplusplus << std::endl;

    cout << "Enter first integer: ";
    cin >> number1;
    cout << "Enter second integer: ";
    cin >> number2;

    sum = number1 + number2;
    cout << "The sum is " << sum << endl;

    return 0;
}
