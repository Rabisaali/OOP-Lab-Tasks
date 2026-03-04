#include<iostream>
using namespace std;

class Person {
    public:
        void show() {
            cout << "Person" << endl;
        }
};

class Student : virtual public Person {};
class Employee : virtual public Person {};
class TeachingAssistant : public Student, public Employee {};

int main () {
    TeachingAssistant obj;
    obj.show();
    
    cout << "The address of Person class by Student class: ";
    cout << static_cast<Person*>(static_cast<Student*>(&obj)) << endl;

    cout << "The address of Person class by Employee class: ";
    cout << static_cast<Person*>(static_cast<Employee*>(&obj)) << endl;
}