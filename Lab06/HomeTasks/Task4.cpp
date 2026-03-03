#include<iostream>
using namespace std;

class Appliance {
    public:
        string brand;

        Appliance(string b) {
            brand = b;
        }
};

class WashingMachine : public Appliance {
    public:
        float capacity;

        WashingMachine (string b, float c) : Appliance(b) {
            capacity = c;
        }
};

class SmartWashingMachine : public WashingMachine {
    public:
        SmartWashingMachine(string b, float c) : WashingMachine(b, c) {};

        void smartControl () {
            cout << "Smart Control Activated: You can control the washing machine via mobile app." << endl;
        }

        void display() {
            cout << "Brand Name: " << brand << endl;
            cout << "Capacity: " << capacity << endl;
            smartControl();
        }
};

int main () {
    SmartWashingMachine s1("LG", 9.5);
    s1.display();
}