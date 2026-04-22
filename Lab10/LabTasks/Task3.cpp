#include<iostream>
using namespace std;

int main () {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    try {

        if (marks<0 || marks>100) {
            throw "Error: Marks out of bounds";
        }

        cout << "Marks within range\n";
    } catch (const char* message) {
        cout << message;
    }
}