#include <iostream>
using namespace std;

class Student {
public:
    int id;

    void set(int i) {
        id = i;
    }

    void show() const {
        cout << "Student ID: " << id << endl;
    }
};

int main() {

    const int SIZE = 3;

    Student s[SIZE];

    for (int i = 0; i < SIZE; i++) {
        s[i].set(i + 1);
    }

    cout << "Student Records:\n";
    for (int i = 0; i < SIZE; i++) {
        s[i].show();
    }

    return 0;
}