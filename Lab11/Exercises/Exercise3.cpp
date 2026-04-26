#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class Student {
    private:
        int id;
        string name;
        float gpa;
    public:
        void input () {
            cout << "Enter ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter GPA: ";
            cin >> gpa;
        }

        void writeToFile() {
            fstream file;
            file.open("Exercise3.txt", ios::app);
            file << "ID: " << id << " | Name: " << name << " | GPA: " << gpa << endl;
            file.close();
        }
};

int main () {
    Student s[5];
    for (int i=0; i<5; i++) {
        cout << "Adding records for student " << i+1 << endl;
        s[i].input();
        s[i].writeToFile();
    }
    cout << "Student record saved!" << endl;
    return 0;
}