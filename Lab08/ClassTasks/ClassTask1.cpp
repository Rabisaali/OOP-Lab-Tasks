#include <iostream>
using namespace std;

class Student {
private:
    float marks;
public:
    Student() {
        marks = 0;
    }
    void setMarks(float m) {
        if (m >= 0 && m <= 100) marks = m;
        else {
            marks = 0;
            cout << "Error: Invalid marks\n";
        }
    }
    friend void average(Student m[], int size);
};

void average(Student m[], int size) {
    float sum = 0;
    if (size==0) {
        cout << "No Students\n";
        return;
    }
    for (int i = 0; i < size; i++) {
        sum += m[i].marks;
    }
    cout << "Average: " << (sum / size) << endl;
}

int main() {
    int n;
    cout << "Enter number of student(s): ";
    cin >> n;

    Student* classroom = new Student[n];

    for (int i=0; i<n; i++) {
        float m;
        cout << "Enter marks for student " << i+1  << ": ";
        cin >> m;
        classroom[i].setMarks(m);
    }
    average(classroom, n);
    delete []classroom;
    return 0;
}