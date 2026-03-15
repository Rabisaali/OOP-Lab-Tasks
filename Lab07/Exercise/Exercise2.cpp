#include <iostream>
using namespace std;

class Shape {
    public:
        void draw() {
            cout << "A shape is being drawn\n";
        }
};

class Circle : public Shape {
    public:
        void draw() {
            cout << "A circle is being drawn\n";
        }
};

class Rectangle: public Shape {
    public:
        void draw() {
            cout << "A rectangle is being drawn\n";
        }
};

int main () {
    Circle c1;
    c1.draw(); // the draw function of circle overrides the draw function of shape class
    Rectangle r1;
    r1.draw(); // the draw function of rectangle overrides the draw function of shape class
}