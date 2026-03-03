#include <iostream>
using namespace std;

class Person {
    public:
        string name;

        Person(string s) {
            name = s;
        }
};

class Employee : public Person {
    public:
        long long int salary;

        Employee (string n, long long int s) : Person(n) {
            salary = s;
        }
};

class Developer : public Employee {
    public:
        string programmingLanguage;

        Developer (string n, long long int s, string p) : Employee(n, s) {
            programmingLanguage = p;
        }

        void display () {
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Programming Language: " << programmingLanguage << endl;
        }
};

int main () {
    Developer d1("Ali", 7800000, "C++");
    d1.display();
}