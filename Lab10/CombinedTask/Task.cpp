#include<iostream>
using namespace std;

template <typename T>

class Calculator {
    private:
        T num1;
        T num2;
    public:
        Calculator(T a, T b) {
            num1 = a;
            num2 = b;
        }

        T add() {
            return num1+num2;
        }

        T subtract() {
            return num1-num2;
        }

        T multiply() {
            return(num1*num2);
        }

        T divide() {
            if (num2 == 0) {
                throw "Error: Division by zero is not allowed!";
            }
            return num1/num2;
        }
};

int main () {
    try {
        int a, b;

        cout << "Enter first number: ";
        cin >> a;

        if (cin.fail()) {
            throw "Error: Invalid input for first number!";
        }

        cout << "Enter second number: ";
        cin >> b;

        if (cin.fail()) {
            throw "Error: Invalid input for second number!";
        }

        Calculator<double> c(a, b);
        cout << "Addition: " << c.add() << endl;
        cout << "Subtraction: " << c.subtract() << endl;
        cout << "Multiplication: " << c.multiply() << endl;
        cout << "Division: " << c.divide() << endl;

    } catch (const char* message) {
        cout << message << endl;
    }
}