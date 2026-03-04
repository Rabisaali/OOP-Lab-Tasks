#include<iostream>
using namespace std;

class Machine {
    public:
        void show () {
            cout << "Hello, this is a machine" << endl;
        }
};

class Printer : virtual public Machine {};
class Scanner : virtual public Machine {};

class AllInOne : public Printer, public Scanner {};

int main () {
    AllInOne a1;
    a1.show(); 
    cout << "Address of Machine class through Printer class: ";
    cout << static_cast<Machine*>(static_cast<Printer*>(&a1)) << endl;

    cout << "Address of Machine class through Scanner class: ";
    cout << static_cast<Machine*>(static_cast<Scanner*>(&a1)) << endl;

}