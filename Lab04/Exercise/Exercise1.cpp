#include <iostream>
using namespace std;

class Car {
    private:
        int modelYear;
    public:
        Car () {
            modelYear = 2024;
        }
        void show() {
            cout << "Model Year: " << modelYear << endl;
        }
};

int main () {
    Car c1;
    c1.show ();
    return 0;
}