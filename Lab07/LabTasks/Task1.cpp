#include<iostream>
using namespace std;

class Area {
    public:
        void area (int side) {
            cout << "The area of the square is: " << side*side << endl;
        }

        void area (int length, int width) {
            cout << "The area of the rectangle is: " << length*width << endl;
        }

        void area (double radius) {
            cout << "The area of teh circle is: " << 3.141*radius*radius << endl;
        }
};

int main () {
    Area a1;
    a1.area(5);
    a1.area(5, 4);
    a1.area(2.5);
}