#include<iostream>
using namespace std;
class LibraryBook {
    private:
        string title;
        bool availability;
    public:
        LibraryBook(string t, bool a) {
            title = t;
            availability = a;
        }
        friend class Librarian;
};
class Librarian {
    public:
        void issue (LibraryBook& b) {
            if (b.availability!=true) cout << b.title << ": Book already issued\n";
            else {
                b.availability=false;
                cout << b.title << ": Book issued\n";
            }
            
        }
        void returnBook (LibraryBook& b) {
            b.availability = true;
            cout << b.title << ": Book returned\n";
        }
};

int main () {
    LibraryBook book1("Harry Potter and the half blood prince", true);
    LibraryBook book2("Harry Potter and the goblet of fire", false);
    Librarian l1;
    l1.issue(book1);
    l1.issue(book2);
    l1.returnBook(book2);
}