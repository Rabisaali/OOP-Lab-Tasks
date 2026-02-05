#include <iostream>
using namespace std;
int main () {
    int a=15;
    int* ptr = &a;
    cout << "The value of variable is: " << a << endl;
    cout << "The address of variable through the ampersand operator is: " << &a << endl;
    cout << "The address of variable through pointer is: " << ptr << endl;
    cout << "The value of variable through pointer is: " << *ptr << endl;
    return 0;
}