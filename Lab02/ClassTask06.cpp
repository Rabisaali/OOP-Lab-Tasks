#include <iostream>
#include <string>
using namespace std;

struct Book {
    string Title;
    string Author;
    int Price;
};

int main () {
    Book b1;
    cout << "Enter the name of the book: ";
    getline(cin, b1.Title);
    cout << "Enter the name of the author of the book: ";
    getline(cin, b1.Author);
    cout << "Enter the price of the book: ";
    cin >> b1.Price;

    cout << "...... Displaying the details ......" << endl;
    cout << "The name of the book that you entered is: " << b1.Title << endl;
    cout << "The name of the author of the book is: " << b1.Author << endl;
    cout << "The price of the book is: " << b1.Price << endl;
}
