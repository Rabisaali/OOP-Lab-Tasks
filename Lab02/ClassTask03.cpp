#include <iostream>
using namespace std;
void square (int* variable);
int main () {
    int value = 5;
    cout << "The value of variable before squaring is: " << value << endl;
    square (&value);
    cout << "After function call: " <<endl;
    cout << "The squared up value of variable is: " << value << endl;
}
void square (int* variable) {
    (*variable) *= (*variable);
    return;
}