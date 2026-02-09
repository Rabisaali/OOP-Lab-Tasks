#include <iostream>
using namespace std;
class Teacher {
    public:
        string name;
        string subject;
        // displaying the details by a method(function)
        // void display() {
        //     cout << "The name of the teacher is " << name << " and teaches " << subject << endl;
        // }
};
int main () {
    Teacher t1, t2;
    t1.name="Sara";
    t1.subject="Mathematics";
    t2.name="Ali";
    t2.subject="Science";

    //displaying the details by the method
    //t1.display();
    //t2.display();

    cout << "The name of the first teacher is: "<< t1.name << " and teaches " << t1.subject << endl;
    cout << "The name of the first teacher is: "<< t2.name << " and teaches " << t2.subject << endl;
}