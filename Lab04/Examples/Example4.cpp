#include <iostream>
using namespace std;

class Person {
private:
    int age;

public:
    Person() {
        age = 0;
    }

    void setAge(int age) {
        this->age = age;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Person p1;

    p1.setAge(21);

    cout << "Age: " << p1.getAge() << endl;

    return 0;
}