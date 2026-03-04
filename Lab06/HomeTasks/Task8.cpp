#include<iostream>
using namespace std;

class Machine {
    public:
        void show () {
            cout << "Hello, this is a machine" << endl;
        }
};

class Printer : public Machine {};
class Scanner : public Machine {};

class AllInOne : public Printer, public Scanner {};

int main () {
    AllInOne a1;
    //a1.show(); //"AllInOne::show" is ambiguous
    a1.Printer::show();
    a1.Scanner::show();
}