/* Elaborado por José L. García: jueves 6 de febrero de 2025
 * Este programa
 * Nombre:
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Cat {

    Cat();

    string Name;
    int Age;
    float Health;

    void Meow();
};

Cat::Cat() {
    cout << "A new cat is born!" << endl;
    Name = "Default name";
    Age = 3;
    Health = 75.0f;
    Meow();
}

void Cat::Meow() {
    cout << "Meow" << endl;
    cout << "Age: " << Age << endl;
    cout << "Health: " << Health << endl;
}

int main() {
    Cat cat;
    cout << "------" << endl;
    cat.Age += 5;
    cat.Meow();

    return 0;
}
