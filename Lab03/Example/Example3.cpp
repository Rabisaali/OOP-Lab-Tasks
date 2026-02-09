#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    void setSalary(int s) {
        if (s > 0)
            salary = s;
        else
            salary = 0;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    Employee e1;
    e1.setSalary(50000);
    cout << "Salary: " << e1.getSalary() << endl;
    return 0;
}