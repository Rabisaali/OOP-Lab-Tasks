#include<iostream>
using namespace std;

class Person {
    public:
        void show() {
            cout << "Person" << endl;
        }
};

class Student : public Person {};
class Employee : public Person {};
class TeachingAssistant : public Student, public Employee {};

int main () {
    TeachingAssistant obj;
    //obj.show(); // "TeachingAssistant::show" is ambiguous
    obj.Student::show();
}