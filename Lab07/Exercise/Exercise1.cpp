#include<iostream>
using namespace std;

class Calculator {
    public:
        int multiply(int a, int b) {
            int ans = a*b;
            return ans;
        }

        int multiply(int a, int b, int c) {
            int ans = a*b*c;
            return ans;
        }

        float multiply(float a, float b) {
            float ans = a*b;
            return ans;
        } 
};

int main () {
    Calculator c1;
    cout << c1.multiply(4, 5) << endl;
    cout << c1.multiply(4, 5, 2) << endl;
    cout << c1.multiply(2.5, 2) << endl;
}