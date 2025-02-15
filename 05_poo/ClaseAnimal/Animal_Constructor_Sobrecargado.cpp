#include <iostream>
#include <string>

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
class Animal {
public:
    Animal();

    Animal(string name, int age, int num_lims);

    string Name;
    int Age;
    int NumberOfLimbs;

    void Report() const;
};

Animal::Animal() {
    cout << "An animal is born!" << endl;
    Name = "DEFAULT";
    Age = 10;
    NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_lims) {
    Name = name;
    Age = age;
    NumberOfLimbs = num_lims;
}


void Animal::Report() const {
    cout << "---------------------------------" << endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << endl;
    cout << "Number Of Limbs: " << NumberOfLimbs << endl;
}


int main() {
    const Animal animal;
    animal.Report();

    const Animal animal2("Cheetah", 20, 10);
    animal2.Report();

    return 0;
}
