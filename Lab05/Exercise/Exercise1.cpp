#include <iostream>
using namespace std;

class Car {
    private:
        long long price;
        float average;
    public:
        static int totalCars;

        Car(long long price, float average) {
            this->price = price;
            this->average = average;
            totalCars++;
        }

        void display() {
            cout << "The price of the car is: " << price << endl;
            cout << "The average fuel consumption of the car is: " << average << endl;
            cout << "-------------------------------------------------" << endl;
        }
        static void showTotalCars() {
            cout << "Total Cars are: " << totalCars << endl;
        }
};
int Car::totalCars = 0;
int main () {
    Car c1(6789345, 7.8);
    Car c2(780000, 10.7);
    Car c3(450000, 6.7);

    c1.display();
    c2.display();
    c3.display();

    Car::showTotalCars();

    return 0;
}