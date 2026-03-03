#include <iostream>
using namespace std;

class University {
    protected:
        string uniName;

    public:
        University(string u) {
            uniName = u;
        }

        void displayUniversity() {
            cout << "University Name: " << uniName << endl;
        }
};

class Faculty : public University {
    protected:
        string facultyName;

    public:
        Faculty(string u, string f) : University(u) {
            facultyName = f;
        }

        void displayFaculty() {
            displayUniversity();
            cout << "Faculty Name: " << facultyName << endl;
        }
};

class Administration {
    protected:
        string role;

    public:
        Administration(string r) {
            role = r;
        }

        void displayAdministration() {
            cout << "Administrative Role: " << role << endl;
        }
};

class HOD : public Faculty, public Administration {
    public:
        HOD (string u, string f, string r) : Faculty(u, f), Administration(r) {}

        void displayDetails() {
            displayFaculty();
            displayAdministration();
            cout << "Position: Head of Department" << endl;
        }
};

int main () {
    HOD h1("FAST-NUCES", "Computer Science", "Controller of Examination");
    h1.displayDetails();
}