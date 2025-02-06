/* Elaborado por José L. García: jueves 6 de febrero de 2025
 * Este programa
 * Nombre:
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Dog {
public:
    Dog() {
        Bark();
        Name = "Default name";
        Age = 10;
        Health = 100.0f;
    }

    string Name;
    int Age;
    float Health;

    void Bark() {
        cout << "Woof" << endl;
    }
};

int main() {
    Dog dog;

    cout << dog.Name << endl;
    cout << dog.Age << endl;
    cout << dog.Health << endl;
    cout << "------" << endl;

    dog.Name = "Cholokuaz";
    dog.Age = 2;
    dog.Health = 90.0f;

    cout << dog.Name << endl;
    cout << dog.Age << endl;
    cout << dog.Health << endl;

    return 0;
}
