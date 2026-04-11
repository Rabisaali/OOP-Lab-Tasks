#include <iostream>
using namespace std;

class CarEngine {
private:
    int horsepower;

public:
    CarEngine(int hp = 100) {
        if (hp >= 100 && hp <= 1000)
            horsepower = hp;
        else {
            horsepower = 100;
            cout << "Invalid horsepower. Set to 100.\n";
        }
    }

    friend class Mechanic;
};

class Mechanic {
public:
    void displayHorsepower(const CarEngine& e) {
        cout << "Engine Horsepower: " << e.horsepower << endl;
    }

    void upgradeHorsepower(CarEngine& e, int newHP) {
        if (newHP >= 100 && newHP <= 1000) {
            e.horsepower = newHP;
            cout << "Horsepower upgraded to " << e.horsepower << endl;
        } else {
            cout << "Invalid upgrade! Must be between 100 and 1000.\n";
        }
    }
};

class Car {
private:
    CarEngine engine;

public:
    Car(int hp) : engine(hp) {}

    friend class Mechanic;

    CarEngine& getEngine() {
        return engine;
    }
};

int main() {
    CarEngine e1(200);
    Mechanic m;

    m.displayHorsepower(e1);
    m.upgradeHorsepower(e1, 500);
    m.displayHorsepower(e1);

    cout << "\n--- Using Car class ---\n";

    Car c1(300);

    m.displayHorsepower(c1.getEngine());
    m.upgradeHorsepower(c1.getEngine(), 900);
    m.displayHorsepower(c1.getEngine());

    return 0;
}