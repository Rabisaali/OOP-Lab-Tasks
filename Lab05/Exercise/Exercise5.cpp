#include <iostream>
using namespace std;

class CPU {
private:
    string model;  

public:

    CPU(string type) {
        model = type;
    }

    
    void display() const {
        cout << "Model: " << model << endl;
        cout << "CPU started working!" << endl;
    }
};

class Computer {
private:
    string brand;  
    CPU cpu;   

public:
    
    Computer(string name, string Type)
        : brand(name), cpu(Type) {}

   
    void start() const {
        cout << "Brand name of computer is: " << brand << endl;
        cpu.display();  
        cout << "Computer is starting...." << endl;
        cout << "----------------------" << endl;
    }
};

int main() {

    Computer c1("Lenovo", "Intel i5");
    Computer c2("HP", "Intel i6");


    c1.start();
    c2.start();

    return 0;
}