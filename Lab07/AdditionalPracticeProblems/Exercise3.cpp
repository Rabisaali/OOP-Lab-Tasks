#include<iostream>
using namespace std;

class Shape {
    public:
        virtual void Area () {
            cout << "The area of the shape is undefined\n";
        }
};

class Circle : public Shape {
    private:
        double radius;
    public:

        Circle(double r) {
            radius = r;
        }

        void Area() {
            cout << "The area of circle is " << 3.141*radius*radius << endl;
        }
};

class Rectangle : public Shape {
    private:
        int length;
        int breadth;

    public:

        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }

        void Area () {
            cout << "The area of rectangle is: " << length*breadth << endl;
        }
};

int main () {
    Shape* s;
    Circle c(5);
    Rectangle r(4, 6);
    s = &c;
    s->Area();

    s = &r;
    s->Area();
}