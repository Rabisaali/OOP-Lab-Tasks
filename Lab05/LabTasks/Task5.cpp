#include<iostream>
using namespace std;
class SIM {
    private:
        string carrier;
    public:
        SIM(string s) {
            carrier = s;
        }
        void showCarrier() {
            cout << "The SIM Carrier is: " << carrier << endl;
        }
};

class Mobile {
    private:
        string model;
        SIM s;
    public:
        Mobile(string m, string simCarrier) : s(simCarrier) {
            model =  m;
        }
        void displayInfo () {
            cout << "The model of the mobile: " << model << endl;
            s.showCarrier();
        }
};

int main () {
    Mobile m1("Samsung", "Jazz");
    Mobile m2("Nokia", "Telenor");
    m1. displayInfo();
    m2.displayInfo();
}