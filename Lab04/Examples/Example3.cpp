#include <iostream>
using namespace std;

class Box {
    public:
        int height;

        Box (int h) {
            height = h;
            cout << "Parameterized Constructor Called" << endl;
        }
        Box (const Box &b) {
            height = b.height;
            cout << "Copy Constructor Called" << endl;
        }

        void display() {
            cout << "Height: " << height << endl;
        }
};

int main () {
    Box b1(10);
    b1.display();
    cout << endl;

    Box b2 = b1;
    b2.display();
    return 0;
}