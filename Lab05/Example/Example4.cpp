#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:

    Circle(double r) {
        radius = r;
    }

    double area() const {
        return 3.14159 * radius * radius;
    }

    void display() const {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area() << endl;
        cout << "-------------------" << endl;
    }
};

int main() {

    Circle c1(5);
    Circle c2(7);

    c1.display();
    c2.display();

    return 0;
}