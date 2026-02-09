#ifndef BOOK_H
#define STUDENT_H

#include <string>
using namespace std;
class Book {
    private:
        string title;
        string author;
    public:
        void setDetails (string, string);
        void getDetails ();
};
#endif