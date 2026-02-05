#include <iostream>
using namespace std;
int main () {
    int var = 5;
    int* ptr = &var;
    cout << "Before modification: " << endl;
    cout << "Accessing the value of variable through the pointer: " << *ptr << " and directly (by variable name): " << var << endl;
    //Modifying the variable
    *ptr = 20;
    cout << "After modification: " << endl;
    cout << "Accessing the value of variable through the pointer: " << *ptr << " and directly (by variable name): " << var << endl;
    return 0;
}