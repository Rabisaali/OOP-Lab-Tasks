#include <iostream>
#include <fstream>
#include<iterator>
using namespace std;

class Student {
public:
    int id;
    string name;
public:
    Student(int i, string n) : id(i) , name(n) {}
};
int main() {
    Student s[] = {Student(34, "Rabisa"), Student(46, "Ali"), Student(67, "Ali")};
    int n = size(s);
    ofstream file("student.dat", ios::binary);
    for(int i=0; i<n; i++) {
        file.write((char*)&s[i], sizeof(s[i]));
    }
    
    file.close();
    cout << "Binary data written successfully." << endl;
    return 0;
}