#include <iostream>
using namespace std;

class Book {
    private:
        const string ISBN;
    public:
        Book (string s): ISBN(s) {}

        void display() {
            cout << "ISBN: " << ISBN << endl;
        }
};

int main () {
    Book b1("978-3-16-148410-0");
    Book b2("0-306-40615-2");
    Book b3("978-0-306-40615-7");

    b1.display();
    b2.display();
    b3.display();

    return 0;
}