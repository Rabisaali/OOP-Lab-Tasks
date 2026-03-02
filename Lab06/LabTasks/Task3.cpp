#include<iostream>
using namespace std;

class Write {
    public:
        void write() {
            cout << "I can write\n";
        }
};

class Speaker {
    public:
        void speak() {
            cout << "I can speak\n";
        }   
};

class Author: public Write, public Speaker {
    public:
        void author () {
            cout << "Hi, I am an author\n";
        }
};

int main () {
    Author a1;
    a1.author();
    a1.speak();
    a1.write();
    return 0;
}
