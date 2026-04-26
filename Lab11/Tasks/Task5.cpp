#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    try {
        ifstream file("data.txt");

        if (!file) {
            throw "Error: File could not be opened!";
        }

        string line;
        cout << "File contents:\n";

        while (getline(file, line)) {
            cout << line << endl;
        }

        file.close();
    }
    catch (const char* msg) {
        cout << msg << endl;
    }

    return 0;
}