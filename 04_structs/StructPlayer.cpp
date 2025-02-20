#include <iostream>
#include <string>


using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

struct LocationVector {
    float x;
    float y;
    float z;
};

struct Player {
    int Level;
    float Health;
    float Damage;
    float Stamina;
    LocationVector Location;

    void TakeDamage(const float dmg) {
        Health -= dmg;
    }

    void DisplayLocation() const {
        cout << "Location X: " << Location.x << endl;
        cout << "Location Y: " << Location.y << endl;
        cout << "Location Z: " << Location.z << endl;
    }

    int GetLevel() const {
        if (Level > 10) {
            cout << "Level is greater than 10!" << endl;
        }
        return Level;
    }
};

int main() {
    Player p_1;
    p_1.Level = 3;
    p_1.Damage = 10;
    p_1.Stamina = 5;
    p_1.Health = 100.f;
    cout << "p_1 Level: " << p_1.GetLevel() << endl;
    p_1.TakeDamage(40.f);
    cout << "p_1 Health: " << p_1.Health << endl;
    p_1.Location.x = 30.f;
    p_1.Location.y = 40.f;
    p_1.Location.z = 50.f;
    p_1.DisplayLocation();
    cout << "------------------------------------" << endl;

    const Player p_2 = {1, 50.f, 50.f, 50.f, {35.5f, 35.5f, 120.f}};
    p_2.DisplayLocation();


    return 0;
}
