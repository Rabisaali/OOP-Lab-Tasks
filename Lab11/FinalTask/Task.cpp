#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float gpa;

public:
    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter GPA: ";
        cin >> gpa;
    }

    void writeToFile() {
        ofstream file("task.txt", ios::app);

        if (!file) {
            cout << "Error opening file!" << endl;
            return;
        }

        file << id << "|" << name << "|" << gpa << endl;
        file.close();

        cout << "Student record added successfully.\n";
    }

    static void viewStudents() {
        ifstream file("task.txt");

        if (!file) {
            cout << "Error opening file!" << endl;
            return;
        }

        string line;
        cout << "\n--- Student Records ---\n";

        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    }

    static void searchStudent() {
        ifstream file("task.txt");

        if (!file) {
            cout << "Error opening file!" << endl;
            return;
        }

        string searchName, line;
        bool found = false;

        cin.ignore();
        cout << "Enter student name to search: ";
        getline(cin, searchName);

        while (getline(file, line)) {
            if (line.find(searchName) != string::npos) {
                cout << "Record Found: " << line << endl;
                found = true;
            }
        }

        if (!found) {
            cout << "Student not found.\n";
        }

        file.close();
    }
};

int main() {
    int choice;
    Student s;

    do {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.input();
                s.writeToFile();
                break;

            case 2:
                Student::viewStudents();
                break;

            case 3:
                Student::searchStudent();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}