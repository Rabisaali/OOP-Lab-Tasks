#include <iostream>
using namespace std;

class Student {
private:
    int rollNumber;          
    string name;             
public:
    static int totalStudents;   

    Student(int roll, string n) {
        rollNumber = roll;
        name = n;
        totalStudents++; 
    }

    void display() const {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "---------------------" << endl;
    }

    static void showTotalStudents() {
        cout << "Total Students in University: "
             << totalStudents << endl;
    }
};

int Student::totalStudents = 0;

int main() {

    Student s1(101, "Ali");
    Student s2(102, "Sara");
    Student s3(103, "Ahmed");

    s1.display();
    s2.display();
    s3.display();

    Student::showTotalStudents();

    return 0;
}