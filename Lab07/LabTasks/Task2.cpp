#include<iostream>
using namespace std;

class Employee {
    public:
        void calculateSalary () {
            cout << "The salary of the employee is: Rs. 55000" << endl; 
        }
};

class Manager: public Employee {
    public:
        void calculateSalary () {
            cout << "The salary of the manager is: Rs. 88000" << endl;
        }
};

class Developer: public Employee {
    public:
        void calculateSalary () {
            cout << "The salary of the developer is: Rs. 85000" << endl;
        }
};

class Intern: public Employee {
    public:
        void calculateSalary () {
            cout << "The salary of the intern is: Rs. 35000" << endl;
        }
};

int main () {
    Manager m1;
    m1.calculateSalary(); // function of base class is overridden by the function manager class
    Developer d1;
    d1.calculateSalary(); // function of base class is overridden by the function developer class
    Intern i1;
    i1.calculateSalary(); // function of base class is overridden by the function intern class
}