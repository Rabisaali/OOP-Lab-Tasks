#include<iostream>
using namespace std;

int main () {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    try {

        if(age<18) {
            throw "Error: You are under aged\n";
        }

        cout << "Your age is perfectly fine\n";

    } catch (const char* message) {
        cout << message << endl;
    }
}