#include <iostream>
using namespace std;

class Shape {
    protected:
        float radius;
    
    public:
        void setRadius(float r) {
            radius = r;
        }
};

class Circle : public Shape {
    private:
        float area;

    public:
        float calculateArea() {
            return (3.141*radius*radius);
        }

        void setArea() {
            area = calculateArea();
        }

        void displayArea() {
            setArea();
            cout << "Radius is: " << radius << endl;
            cout << "Area is: " << area << endl;
        }
};

int main () {
    Circle c1;
    c1.setRadius(5);
    c1.displayArea();
    return 0;
}