#include "Book.h"
#include <iostream>
using namespace std;

void Book::setDetails (string t, string a) {
    title = t;
    author = a;
}

void Book::getDetails () {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
}