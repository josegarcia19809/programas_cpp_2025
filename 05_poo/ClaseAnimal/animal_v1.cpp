#include <iostream>
#include <string>

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
class Animal {
public:
    Animal();

    string Name;
    int Age;
    int NumberOfLimbs;

    void Report();
};

Animal::Animal() {
    cout << "An animal is born!" << endl;
    Name = "DEFAULT";
    Age = 10;
    NumberOfLimbs = 4;
}

void Animal::Report() {
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "Number Of Limbs: " << NumberOfLimbs << endl;
}


int main() {
    Animal animal;
    animal.Report();
    return 0;
}
