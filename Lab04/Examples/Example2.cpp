#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length, width;
    public:
        Rectangle (int l, int w) {
            length = l;
            width = w;
        }
        int area () {
            return length*width;
        }
        void display () {
            cout << "Length: " << length << ", Width: " << width << endl;
            cout << "Area: " << area() << endl;
        }
};

int main () {
    Rectangle r1 (5, 3);
    Rectangle r2(10, 4);

    cout << "Rectangle 1: " << endl;
    r1.display();

    cout << "\nRectangle 2: " << endl;
    r2.display();

    return 0;
}