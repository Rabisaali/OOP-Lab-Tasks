#include <iostream>
using namespace std;

class Complex {
    public:
        int real, imag;

        Complex(int a, int b) {
            real = a;
            imag = b;
        }

        Complex operator + (Complex c) {
            Complex temp(0,0);
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }

        Complex operator - (Complex c) {
            Complex temp(0,0);
            temp.real = real - c.real;
            temp.imag = imag - c.imag;
            return temp;
        }

        Complex operator * (Complex c) {
            Complex temp(0, 0);
            temp.real = real*c.real - imag*c.imag;
            temp.imag = real*c.imag + imag*c.real;
            return temp;
        }
};

int main () {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex c3 = c1 + c2; // Complex c3 = c1.operator + (c2);
    cout << "After adding the two complex numbers ... the answer is: " << c3.real << " + " << c3.imag << "i" << endl;

    Complex c4 = c1 - c2; // Complex c4 = c1.operator - (c2);
    cout << "After subtracting the two complex numbers ... the answer is: " << c4.real << " + " << c4.imag << "i" << endl;

    Complex c5 = c1 * c2; // Complex c5 = c1.operator * (c2);
    cout << "After multiplying the two complex numbers ... the answer is: " << c5.real << " + " << c5.imag << "i" << endl;


}