#include<iostream>
using namespace std;
class Circle {
    private:
        double radius;
    public:
        Circle (double r) {
            radius = r;
        }
        double area() const {
            return 3.14159*radius*radius;
        }
        void display() {
            cout << "Radius of the circle is: " << radius << endl;
            cout << "Area of the circle is: " << area() << endl;
            cout << "---------------------------" << endl;
        }
};

int main () {
    Circle c1(5);
    Circle c2(6);
    c1.display();
    c2.display();
    return 0;
}