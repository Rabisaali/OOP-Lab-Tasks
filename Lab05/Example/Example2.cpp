#include <iostream>
using namespace std;

class Counter {
public:
    static int count;

    Counter() {
        count++;
    }

    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

int Counter::count = 0;

int main() {

    Counter c1;
    Counter c2;
    Counter c3;

    Counter::showCount();

    return 0;
}