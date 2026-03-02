#include<iostream>
using namespace std;

class Vehicle {
    protected:
        string brand;
        float speed;

    public:
        Vehicle (string b, float s) {
            brand = b;
            speed = s;
        }

        void showVehicle() {
            cout << "............Using the Vehicle's class.........\n";
            cout << "Brand: " << brand << endl;
            cout << "Speed: " << speed << endl;
        }
};

class Car : public Vehicle {
    private:
        string FuelType;
    
        public:
            Car (string b, float s, string f) : Vehicle (b, s) {
                FuelType = f;
            }

            void showCarDetails() {
                showVehicle();
                cout << ".............Using Car's class.................\n";
                cout << "Fuel Type: " << FuelType << endl;
            }
};

int main () {
    Car c1("Honda City", 24.5, "Petrol");
    c1.showCarDetails();
    return 0;
}