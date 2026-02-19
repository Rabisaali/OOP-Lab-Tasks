#include <iostream>
#include <string>
using namespace std;

class LibraryMember {
    public:
        static int totalMembers;
        string name;

        LibraryMember(string name) {
            this->name=name;
            totalMembers++;
        }
        void display() {
            cout << "Library Member number " << totalMembers << endl;
            cout << "Name: " << name << endl;
            cout << "........................." << endl;
        }
        static void showCount() {
            cout << "Total number of members are: " << totalMembers << endl;
        }
};
int LibraryMember::totalMembers=0;

int main () {
    LibraryMember m1("Ali");
    m1.display();
    LibraryMember m2("Sara");
    m2.display();
    LibraryMember m3("Khan");
    m3.display();
    LibraryMember m4("Falak");
    m4.display();
    LibraryMember m5("Ria");
    m5.display();
    LibraryMember::showCount();
}