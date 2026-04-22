#include<iostream>
using namespace std;

template <typename T>
class Calculator {
    T num1;
    T num2;

    public:
        Calculator(T a, T b) {
            num1 = a;
            num2 = b;
        }

        T addition () {
            return (num1+num2);
        }

        T subtraction () {
            return (num1-num2);
        }

        T multiplication () {
            return (num1*num2);
        }

        T division () {
            if (num2 == 0) {
                cout << "Division by zero not allowed!" << endl;
                return 0;
            }
            return (num1/num2);
        }
};

int main () {
    Calculator<int> c(6, 2);
    cout << "Addition of two int(s): "<< c.addition() << endl;
    cout << "Difference of two int(s): " << c.subtraction() << endl;
    cout << "Multiplication of two int(s): " << c.multiplication() << endl;
    cout << "Division of two int(s): " << c.division() << endl << endl;

    Calculator<float> d(3.5, 7.8);
    cout << "Addition of two float(s): "<< d.addition() << endl;
    cout << "Difference of two float(s): " << d.subtraction() << endl;
    cout << "Multiplication of two float(s): " << d.multiplication() << endl;
    cout << "Division of two float(s): " << d.division() << endl;

}