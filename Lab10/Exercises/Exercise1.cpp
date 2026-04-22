#include<iostream>
using namespace std;

template <typename T>
T minimum (T a, T b) {
    return (a < b ? a : b);
}

int main () {
    cout << "Minimum Integer: " << minimum(4, 5) << endl;

    cout << "Minimum Float: " << minimum(3.4, 6.7) << endl;

    cout << "Minimum Char: " << minimum('a', 'c') << endl;

}