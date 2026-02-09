#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        balance = b;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(10000);
    acc.showBalance();
    return 0;
}