#include <iostream>
using namespace std;

class Employee {
    protected:
        int ID;
        double Salary;

    public:
        Employee(int id, double s) {
            ID = id;
            Salary = s;
        }

        void showEmployee () {
            cout << "Employee ID: " << ID << endl;
            cout << "Employee Salary: " << Salary << endl;
        }
};

class Manager : public Employee {
    private:
        double Bonus;

    public:
        Manager(int id, double s, double b) : Employee(id, s) {
            Bonus = b;
        }

        void showManager() {
            showEmployee();
            cout << "The bonus of the manager is: " << Bonus << endl;
            cout << "The total salary of the manager is: " << Bonus+Salary << endl;
        }
};

int main () {
    Manager m1(23, 670000, 35000);
    m1.showManager();
}