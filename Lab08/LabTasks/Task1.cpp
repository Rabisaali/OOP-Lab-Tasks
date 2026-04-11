#include<iostream>
using namespace std;
class Rectangle {
    private:
        float length;
        float width;
    public:
        Rectangle(float l, float w) {
            if (l>0) length = l;
            else {
                length=1;
                cout << "Invalid length. Length set to 1" << endl;
            }
            if (width>0) width = w;
            else {
                width=1;
                cout << "Invalid width. Width set to 1" << endl;
            }
        }
        friend void calculate(Rectangle r);
};

void calculate (Rectangle r) {
    float area = r.length*r.width;
    float perimeter = 2*(r.length+r.width);
    cout << "Area: " << area << " || Perimeter: " << perimeter << endl;
}

int main () {
    float l, w;
    cout << "Enter length of the rectangle: ";
    cin >> l;
    cout << "Enter width of the rectangle: ";
    cin >> w;
    Rectangle r(l, w);
    calculate(r);
}