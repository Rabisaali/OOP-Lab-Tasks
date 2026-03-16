#include<iostream>
using namespace std;

class Student {
    private:
        string name;
        string rollNo;

    public:
        Student (string n, string r) {
            name = n;
            rollNo = r;
        }

        friend ostream& operator << (ostream& out, const Student& s);
};

ostream& operator << (ostream& out, const Student& s) {
    out << "Roll No: " << s.rollNo << endl;
    out << "Name: " << s.name << endl;
    return out;
}

int main () {
    Student s1("Rabisa Ali", "25K-0876");

    cout << s1;
}