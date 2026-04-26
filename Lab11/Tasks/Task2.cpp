#include<iostream>
#include<fstream>
using namespace std;

int main () {
    fstream file;
    file.open("Task2.txt", ios::in);

    if (!file) {
        cout << "Error: File not found" << endl;
        return 0;
    }

    int count = 0;
    string line;

    while (getline(file, line)) {
        count ++;
    }
    cout << "Number of lines: " << count << endl;
    return 0;
}