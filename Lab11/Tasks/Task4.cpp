#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student {
public:
    int id;
    char name[20];

    Student(int i = 0, const char* n = "") {
        id = i;
        strcpy(name, n);
    }

    void display() {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

int main() {
    Student s[] = {
        Student(34, "Rabisa"),
        Student(46, "Ali"),
        Student(67, "Sara")
    };

    int n = size(s);

    ofstream file("student.dat", ios::binary);

    if (!file) {
        cout << "Write file error!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        file.write((char*)&s[i], sizeof(s[i]));
    }

    file.close();
    cout << "Binary data written successfully.\n";

    ifstream infile("student.dat", ios::binary);

    if (!infile) {
        cout << "Read file error!" << endl;
        return 1;
    }
    
    cout << "\nStored Student Records:\n";

    for (int i = 0; i < n; i++) {
        infile.read((char*)&s[i], sizeof(s[i]));
        s[i].display();
    }

    infile.close();
    return 0;
}