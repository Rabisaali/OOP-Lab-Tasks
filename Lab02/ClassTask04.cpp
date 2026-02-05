#include <iostream>
using namespace std;
int main () {
    int* ptr = new int;
    cout << "Enter a value: ";
    cin >> *ptr;
    cout << "You entered this value: " << *ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}