#include "Student.h"
#include <iostream>
using namespace std;

void Student::setData(int r, string n) {
    rollNo = r;
    name = n;
}
void Student::display() {
    cout << "Roll No: " << rollNo << endl;
    cout << "Name: " << name << endl;
}
