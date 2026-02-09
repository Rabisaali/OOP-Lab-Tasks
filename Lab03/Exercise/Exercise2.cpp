#include <iostream>
using namespace std;

class Student {
private:
    float CGPA;

public:
    void setCGPA(float c) {
        if (c > 4.0 || c < 0) {
            CGPA=0.0;
            cout << "Error! CGPA set to 0.0";
        }
        else
            CGPA = c;
    }

    float getCGPA() {
        return CGPA;
    }
};

int main() {
    Student s1;
    s1.setCGPA(4.0);
    cout << "CGPA: " << s1.getCGPA() << endl;
    return 0;
}