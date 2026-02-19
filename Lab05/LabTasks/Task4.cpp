#include <iostream>
using namespace std;
class Square {
    private:
        int side;

    public:
        Square(int s) {
            side = s;
        }

        int calculateArea () const {
            int area = side*side;
            return area;
        }
};

int main () {
    Square s1(5);
    Square s2(10);
    cout << "The area of the square 1 is: " << s1.calculateArea() << endl;
    cout << "The area of the second square is: " << s2.calculateArea() << endl;
}