#include <iostream>
using namespace std;

class Account {
private:
    string accNo;
    double balance;
public:
    //default constructor
    Account () {
        accNo = "0000";
        balance = 0;
        cout << "Default constructor called. Address " << this << endl;
    }
    //parametrized constructor
    Account (string s, double b) {
        accNo=s;
        balance=b;
        cout << "Parametrized constructor called. Address " << this << endl;
    }
    //copy constructor
    Account(const Account &obj) {
        accNo = obj.accNo;
        balance = obj.balance;
        cout << "Copy constructor called. Address "<< this << endl;
    }
    void display () {
        cout << "Account Number: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    } 
};

int main () {
    Account a1;
    cout << "Account 1:\n";
    a1.display();
    cout << endl;
    Account a2("ban234513g4", 50000.75);
    cout << "Account 2:\n";
    a2.display();
    cout << endl;
    Account a3=a2;
    a3.display();
}