#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;

    void displayDetails () {
        cout << "The car has " << brand << " brand" << endl;
        cout << "The car has " << model << " model" << endl;
    }
};

int main () {
    Car c1;
    c1.model = "RAV4";
    c1.brand = "Toyota";
    c1.displayDetails();
    return 0;
}