#include <iostream>
#include <fstream>
using namespace std;

int main () {
    int age;
    string name;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;

    fstream file;
    file.open("Task1.txt", ios::app);

    if (!file) {
        cout << "Error: file could not be opened!" << endl;
        return 0;
    }

    file << "Name: " << name <<  endl;
    file << "Age: " << age << endl;

    file.close();
    cout << "Data successfully written to file." << endl;
}