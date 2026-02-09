#include <iostream>
using namespace std;

class Student {
    private:
        int rollNo;
    public:
        Student () {
            rollNo = 0;
            cout << "Constructor called" << endl;
        }

        void display () {
            cout << "Roll No: " << rollNo << endl;
        }
};

int main () {
    Student s1;
    s1.display ();
    return 0;
}