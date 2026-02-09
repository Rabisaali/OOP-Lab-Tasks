#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string title;

        Book (string t) {
            title = t;
            cout << "Parameterized COnstructor Called" << endl;
        }

        Book (const Book &b) {
            title = b.title;
            cout << "Copy Constructor Called" << endl;
        }

        void display() {
            cout << "Book Title: " << title << endl;
        }
};

int main () {
    Book b1 ("Object Oriented Programming");
    b1.display();

    cout << endl;

    Book b2 = b1;
    b2.display();

    return 0;
}