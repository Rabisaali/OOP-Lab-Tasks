#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
public:
    Student(int id, string name) {
        this->id = id;
        this->name = name;
        cout << "Constructor called\n";
    }
    //ambiguity 
    // Student (int id, string name) {
    //     id = id;
    //     name = name
    // }

    //this keyword refers to the current object of a class. It is useful when function parameters have the same names as data members, which creates ambiguity. By writing this->variable, we clearly specify that we are accessing the object’s member variable.
    void display() {
        cout << "Student ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
    ~Student () {
        cout << "Destructor called\n";
    }
};

int main() {

    Student s1(101, "Sara");

    s1.display();

    return 0;
}