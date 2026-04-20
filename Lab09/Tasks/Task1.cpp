#include<iostream>
using namespace std;
class Transaction {
    public:
        string accountNumber;
        double amount;
        
        Transaction(string a, double val) {
            accountNumber = a;
            amount = val;
        }
        virtual void processTransaction() = 0;
};

class Deposit: public Transaction {
public:
    double valueToBeDeposited;
    Deposit(string a, double val, double init=0) : Transaction(a, init) { 
        valueToBeDeposited = val;
    }
    void processTransaction() {
        cout << "Deposit Transaction" << endl; 
        cout << "Account: " << accountNumber << endl;
        cout << "Previous Amount: " << amount << endl;
        amount += valueToBeDeposited;
        cout << "Current Amount: " << amount << endl;
        cout << "Status: Amount Deposited Successfully" << endl;
    }
};

class Withdrawal: public Transaction {
public:

    double amountToBeWithdrawn;

    Withdrawal(string a, double val, double amount) : Transaction(a, amount) {}

    void processTransaction() {
        cout << "Withdrawal Transaction" << endl; 
        cout << "Account: " << accountNumber << endl;
        cout << "Previous Amount: " << amount << endl;
        if (amount-amountToBeWithdrawn>=0) {
            amount-=amountToBeWithdrawn;
            cout << "Current Amount: " << amount << endl;
        }
        else {
            amount=0;
            cout << "Amount = 0 (negative amount cannot exist)" << endl;
        }
        cout << "Status: Withdrawn successfully" << endl;
    }
};

class Transfer: public Transaction {
public:
    double amountToBeTransferred;
    string accountToBeTransferredTo;

    Transfer(string a, double val, double amount, string c) : Transaction(a, val) {
        amountToBeTransferred=amount;
        accountToBeTransferredTo = c;
    }

    void processTransaction() {
        cout << "Transfer Transaction" << endl; 
        cout << "Account to be Transferred to: " << accountToBeTransferredTo << endl;
        cout << "Your Account Number: " << accountNumber << endl;
        double output = (amount>=amountToBeTransferred)? amountToBeTransferred: amount-amountToBeTransferred;
        cout << "Previous amount(in your account): " << amount << " | ";
        if (amount-amountToBeTransferred>=0) {
            amount-=amountToBeTransferred;
            cout << "Current Amount(in your account): " << amount << endl;
        }
        else {
            amount=0;
            cout << "Amount = 0 (negative amount cannot exist)" << endl;
        }
        cout << "Total Amount Transferred:  " << output <<endl;
        cout << "Status: Amount Transferred Successfully" << endl;
    }
};

int main () {
    Transaction* t;

    Deposit d1("12345", 50000);
    t = &d1;
    t->processTransaction();
}