#include <iostream>
using namespace std;
class BankAccount {
    private:
        long long balance;
        int id;
    public:
        static float interestRate;

        BankAccount(long long balance, int id) {
            this->balance=balance;
            this->id = id;
        }

        static void displayInterestRate() {
            cout << "Current Interest Rate is: " << interestRate << "%" << endl;
        }
};

float BankAccount::interestRate = 5.0;

int main () {
    BankAccount b1(2345673, 89);
    BankAccount b2(890000, 78);
    cout << "Bank Account 1:\n";
    b1.displayInterestRate();
    cout << "Bank Account 2:\n";
    b2.displayInterestRate();
    BankAccount::interestRate = 6.7;
    cout << "After changing:\n";
    cout << "Bank Account 1:\n";
    b1.displayInterestRate();
    cout << "Bank Account 2:\n";
    b2.displayInterestRate();
}