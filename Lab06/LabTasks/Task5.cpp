#include <iostream>
using namespace std;

class Account {
    protected:
        int accountNumber;

    public:
        Account(int accNum) {
            accountNumber = accNum;
        }

        void showAccount() {
            cout << "Account Number: " << accountNumber << endl;
        }
};

class SavingsAccount : public Account {
    private:
        float balance;
        float rate;
    
    public:
        SavingsAccount(int ac, float b, float r) : Account(ac) {
            balance = b;
            rate = r;
        }

        void calculateInterest() {
            float interest = balance*rate / 100;
            cout << "Interest: " << interest << endl;
        }
};

class CurrentAccount : public Account {
    private:
        float balance;
        float overdraftLimit;

    public:
        CurrentAccount(int accNo, float b, float l) : Account(accNo) {
            balance = b;
            overdraftLimit = l;
        }

        void calculateOverdraft () {
            cout << "Overdraft limit: " << overdraftLimit << endl;
        }
};

int main () {
    SavingsAccount s(101, 50000, 5);
    CurrentAccount c(102, 50000, 10000);
    
    cout << "Savings Account Details: " << endl;
    s.showAccount();
    s.calculateInterest();

    cout << "Cuurrent Account Details: " << endl;
    c.showAccount();
    c.calculateOverdraft();

    return 0;
}