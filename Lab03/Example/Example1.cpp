#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name; 

    void display() { 
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1; //object
    s1.rollNo = 101;
    s1.name = "Ali";
    s1.display();
    return 0;
}