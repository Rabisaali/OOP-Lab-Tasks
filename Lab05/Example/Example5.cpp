#include <iostream>
using namespace std;

class Engine {
private:
    string engineType;  

public:

    Engine(string type) {
        engineType = type;
    }

    
    void start() const {
        cout << "Engine Type: " << engineType << endl;
        cout << "Engine Started!" << endl;
    }
};

class Car {
private:
    string carName;  
    Engine engine;   

public:
    
    Car(string name, string engineType)
        : carName(name), engine(engineType) {}

   
    void drive() const {
        cout << "Car Name: " << carName << endl;
        engine.start();  
        cout << "Car is moving…" << endl;
        cout << "----------------------" << endl;
    }
};

int main() {

    Car car1("Toyota", "V6");
    Car car2("Honda", "V4");


    car1.drive();
    car2.drive();

    return 0;
}