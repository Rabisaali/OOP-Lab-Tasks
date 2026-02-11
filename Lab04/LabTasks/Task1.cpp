#include <iostream>
using namespace std;

class Employee {
    private:
        int id;
        int salary;
    public:
        Employee() {
            id = 0;
            salary = 0;
            cout << "Constructor called" << endl;
        }
        void display() {
            cout << "The id of the employee is: " << id << endl;
            cout << "The salary of the person is: " << salary << endl;
        }
};

int main () {
    Employee e1, e2, e3;
    cout << "\nThe values of employee 1 are: " << endl;
    e1.display();
    cout << "\nThe values of employee 2 are: " << endl;
    e2.display();
    cout << "\nThe values of employee 3 are: " << endl;
    e3.display();
} 