#include <iostream>
using namespace std;

class Person {
    private:
        string ID;
        string name;
    public:
        Person(string id, string n) : ID(id), name(n) {}
        void displayPerson() {
            cout << "ID: " << ID << endl;
            cout << "Name: " << name << endl;
        } 
};

class Student : virtual public Person {
    private:
      float GPA;
    public:
        Student(float g, string id, string name) : Person(id, name) {
            GPA = g;
        }
        void displayStudent () {
            cout << "GPA: " << GPA << endl;
        }
};
class Employee : virtual public Person {
    private:
        int salary;
    public:
        Employee(int s, string id, string name) : Person(id, name) {
            salary = s;
        }
        void displayEmployee() {
            cout << "Salary: " << salary << endl;
        }
};
class TeachingAssistant : public Student, public Employee {
    public:
        TeachingAssistant(int s, float g, string id, string n) : Student (g, id, n) , Employee (s, id, n), Person(id, n) {}
        void displayTA() {
            displayPerson();
            displayStudent();
            displayEmployee();
        }
};

int main () {
    TeachingAssistant ta(50000, 3.9, "25K-0876", "Ali");
    ta.displayTA();
}