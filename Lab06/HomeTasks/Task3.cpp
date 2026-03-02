#include <iostream>
using namespace std;

class Driver {
    public:
        void driver() {
            cout << "I am a driver\n";
        }
};

class Mechanic {
    public:
        void mechanic() {
            cout << "I am a mechanic\n";
        }
};

class Technician : public Driver, public Mechanic {
    public:
        void technician () {
            cout << "I am a technician\n";
        }
};

int main () {
    Technician t1;
    t1.technician();
    t1.driver();
    t1.mechanic();
    return 0;
}