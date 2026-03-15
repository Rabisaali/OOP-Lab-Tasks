#include<iostream>
using namespace std;

class Vehicle {
    public:
        virtual void startEngine() {
            cout << "The engine of the vehicle has started\n";
        }
};

class Car: public Vehicle {
    public:
        void startEngine() {
            cout << "The engine of the car has started\n";
        }
};

class Bike: public Vehicle {
    public:
        void startEngine() {
            cout << "The engine of the bike has started\n";
        }
};

class Truck: public Vehicle {
    public:
        void startEngine() {
            cout << "The engine of the truck has started\n";
        }
};

int main () {
    Vehicle *v1, *v2, *v3;
    Car c1;
    v1 = &c1; //base class pointer pointing to derived class object

    Bike b1;
    v2 = &b1; //base class pointer pointing to derived class object

    Truck t1;
    v3 = &t1; //base class pointer pointing to derived class object

    v1->startEngine(); //calling car's function
    v2->startEngine(); //calling bike's function
    v3->startEngine(); //calling truck's function
}