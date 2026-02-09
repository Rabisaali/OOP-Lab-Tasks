#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int balance;
    string accountNumber;

public:
    void setBalance(int b) {
        balance = b;
    }
    void setAccountNumber (string s) {
        accountNumber = s;
    }
    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
    void showAccountNumber() {
        cout << "Account Number: " << accountNumber << endl;
    }
};
// private members improve program sceurity by enforcing encapsulation, they restrict direct access to the internal data and methods, and they also prevent external, unauthorized, or accidental modification of sensitive data.
int main() {
    BankAccount acc;
    acc.setBalance(10000);
    acc.showBalance();
    acc.setAccountNumber("67843dre34");
    acc.showAccountNumber();
    return 0;
}