#include <iostream>
using namespace std;

class Base {

    public:
        int publicVariable = 10;

    protected:
        int protectedVariable = 20;

    private:
        int privateVariable = 30;

    public:
        void showBase() {
            cout << "Inside Base Class: " << endl;
            cout << "Public: " << publicVariable << endl;
            cout << "Protected: " << protectedVariable << endl;
            cout << "Private: " << privateVariable << endl;
        }
};

class PublicDerived : public Base {
    public:
        void show() {
            cout << "Public Derived Class: \n" << endl;
            cout << "Public Variable: " << publicVariable << endl;
            cout << "Protected Variable: " << protectedVariable << endl;
            //cout << "Private Variable: " << privateVariable << endl;  //inaccessible(private member)
        }
};

class ProtectedDerived : protected Base {
    public:
        void show() {
            cout << "Protected Derived Class: \n" << endl;
            cout << "Public Variable: " << publicVariable << endl; // this becomes protected too
            cout << "Protected Variable: " << protectedVariable << endl;
            //cout << "Private Variable: " << privateVariable << endl;  //inaccessible(private member)
        }
};

class PrivateDerived : private Base {
    public:
        void show() {
            cout << "Private Derived Class: \n" << endl;
            cout << "Public Variable: " << publicVariable << endl; //this becomes private too
            cout << "Protected Variable: " << protectedVariable << endl; // this becomes private too
            //cout << "Private Variable: " << privateVariable << endl;  //inaccessible(private member)
        }
};

int main () {
    Base b0;
    b0.showBase();
    cout << "Calling each variable separately: " << endl;
    cout << "Public Variable: " << b0.publicVariable << endl;
    //cout << "Protected Variable: " << b0.protectedVariable << endl; // inaccessible
    //cout << "Private Variable: " << b0.privateVariable << endl; // inaccessible
    cout << "____________________________________________________________\n";

    PublicDerived b1;
    b1.show();
    cout << "Calling each variable separately: " << endl;
    cout << "Public Variable: " << b1.publicVariable << endl;
    //cout << "Protected Variable: " << b1.protectedVariable << endl; // inaccessible
    //cout << "Private Variable: " << b1.privateVariable << endl; // inaccessible
    cout << "____________________________________________________________\n";

    ProtectedDerived b2;
    b2.show();
    cout << "Calling each variable separately: " << endl;
    //cout << "Public Variable: " << b2.publicVariable << endl; //inaccessible
    //cout << "Protected Variable: " << b2.protectedVariable << endl; // inaccessible
    //cout << "Private Variable: " << b2.privateVariable << endl; // inaccessible
    cout << "____________________________________________________________\n";
    
    PrivateDerived b3;
    b3.show();
    cout << "Calling each variable separately: " << endl;
    //cout << "Public Variable: " << b3.publicVariable << endl; //inaccessible
    //cout << "Protected Variable: " << b1.protectedVariable << endl; // inaccessible
    //cout << "Private Variable: " << b1.privateVariable << endl; // inaccessible
}