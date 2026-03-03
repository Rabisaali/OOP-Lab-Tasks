#include <iostream>
using namespace std;

class Device {
    protected:
        string brand;

    public:
        Device(string b) {
            brand = b;
        }

        void displayDevice() {
            cout << "Brand: " << brand << endl;
        }
};

class Computer : public Device {
    protected:
        string processor;

    public:
        Computer(string b, string p) : Device(b) {
            processor = p;
        }

        void displayComputer() {
            displayDevice();
            cout << "Processor: " << processor << endl;
        }
};

class Network {
    protected:
        string ipAddress;

    public:
        Network(string q) {
            ipAddress = q;
        }

        void displayNetwork() {
            cout << "IP Address: " << ipAddress << endl;
        }
};

class Server : public Computer, public Network {
    public:
        Server (string b, string p, string q) : Computer(b, p), Network(q) {}

        void displayDetails() {
            displayComputer();
            displayNetwork();
            cout << "Device Type: Server" << endl;
        }
};

int main () {
    Server s1("Dell", "AMD EPYC 9005", "172.16.52.63");
    s1.displayDetails();
}