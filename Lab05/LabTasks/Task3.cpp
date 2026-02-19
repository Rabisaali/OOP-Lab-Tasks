#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    public:
        const int vehicleID;
        string modelName;

        Vehicle (int id, string name) : vehicleID(id) {
            modelName = name;
        } 
};

int main () {
    Vehicle v1(101, "Toyota");
    cout << "The id of the vehicle is: " << v1.vehicleID << " the model of the car is: " << v1.modelName << endl;
}