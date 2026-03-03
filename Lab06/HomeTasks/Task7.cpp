#include<iostream>
using namespace std;

class BankAccount {
    public:
        int accountNumber;
    
    private:
        int PIN;

    protected:
        long long balance;

    public:
        BankAccount(int accNum, int p, long long b) {
            accountNumber = accNum;
            PIN = p;
            balance = b;
        }

        void showDetails() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
            cout << "PIN: " << PIN << endl;
        }
};

class SavingsAccount : private BankAccount {
    public:
        SavingsAccount(int accNo, int p, long long bal) : BankAccount(accNo, p, bal) {}

        void display () {
            cout << "Through Savings Account Class:\n";
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
            //cout << "PIN: " << PIN << endl; // inaccessible because PIN is a private member
        }
};

int main () {
    SavingsAccount s1(101, 1234, 7890000);
    s1.display(); // Public method of Savings Account so accessible
    //s1.showDetails(); // inaccessible (Public method of a private base class)

    //cout << "Account Number: " << s1.accountNumber << endl; //inaccessible (Public data member of a private base class)
    //cout << "Balance: " << s1.balance << endl; //inaccessible (protected member of a private base class)
    //cout << "PIN: " << s1.PIN << endl; //inaccessible (Private member of a private abse class);
}