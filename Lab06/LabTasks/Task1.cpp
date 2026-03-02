#include <iostream>
using namespace std;
class Person {
    public:
        string name;
        int age;

        Person (string n, int a) {
            name = n;
            age = a;
        }

        void displayInfo() {
            cout << "................Using Person's class to display the name and age...........\n";
            cout << "The name is: " << name << endl;
            cout << "The age is: " << age << endl;
        }
};

class Student: public Person {
    public:
        int rollNumber;

        Student(string n, int a, int r) : Person(n, a) {
            rollNumber = r;
        }
        
        void displayStudent() {
            displayInfo();
            cout << "\n............Returning back to the student function...................\n";
            cout << "The roll number of the student is: " << rollNumber << endl;
        }
};

int main () {
    Student s1("Ali", 18, 11);
    s1.displayStudent();
    return 0;
}