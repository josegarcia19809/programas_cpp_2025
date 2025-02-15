#include <iostream>
#include <string>

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
class Animal {
public:
    Animal();

    Animal(string name, int age, int num_limbs);

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
    cout << "An animal with name: " << name << " is born!" << endl;
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

class Dog : public Animal {
public:
    Dog();

    Dog(string name, int age, int num_limbs);

    void Speak();
};

Dog::Dog() {
    cout << "Dog is born!" << endl;
}

Dog::Dog(string name, int age, int num_limbs) : Animal(name, age, num_limbs) {
    cout << "An dog with name: " << name << " is born!" << endl;
}

void Dog::Speak() {
    cout << "Woof" << endl;
}


int main() {
    Dog dog("Messikuaz", 6, 4);
    dog.Report();
    dog.Speak();

    return 0;
}
