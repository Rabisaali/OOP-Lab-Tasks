#include <iostream>
using namespace std;

class Employee {
public:
    int id;
    long salary;

    void set(int i, long sal) {
        id = i;
        salary = sal;
    }

    void show() const {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    const int SIZE = 5;

    Employee s[SIZE];
    long defualt_salary = 10000;
    for (int i = 0; i < SIZE; i++) {
        s[i].set(i + 1, defualt_salary);
        defualt_salary+=9000;
    }

    cout << "Employee Records:\n";
    for (int i = 0; i < SIZE; i++) {
        s[i].show();
    }

    return 0;
}