#include <iostream>
#include <string>
using namespace std;

class SchoolAccount {
    public:
        static int tutionFee;

        string studentName;
        float grade;

        SchoolAccount(string name, float gpa) {
            studentName = name;
            grade = gpa;
        }
        static void showFee () {
            cout << "The tution fee is: " << tutionFee << endl;
        }
        void display() {
            cout << "The name of the student is: " << studentName << " and the grade is: " << grade << endl;
            cout << "............................................." << endl;
        }
};

int SchoolAccount::tutionFee = 20000;

int main () {
    SchoolAccount s1("Ali", 4.0);
    SchoolAccount s2("Sara", 3.67);
    s1.display();
    s2.display();
    SchoolAccount::showFee();
}