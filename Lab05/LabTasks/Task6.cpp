#include <iostream>
using namespace std;
class Product {
    private:
        int id;
        string name;
        float price;
    public:
        void set_data() {
            string s;
            int d;
            float f;
            cout << "Enter the name of the product: ";
            cin >> s;
            name = s;
            cout << "Enter the id of the product: ";
            cin >> d;
            id = d;
            cout << "Enter the price of the product: ";
            cin >> f;
            price = f;
        }
        void get_data() {
            cout << "Product name: " << name << endl;
            cout << "Product ID: " << id << endl;
            cout << "Product price: " << price << endl;
        }
};

int main () {
    int size = 4;
    Product p[size];
    cout << "Getting inputs: " << endl;
    for (int i=0; i<size; i++) {
        cout << "Product " << i+1 << " details: " << endl;
        p[i].set_data();
    }
    cout << "Displaying details: " << endl;
    for (int i=0; i<size; i++) {
        cout << "Product " << i+1 << ":" << endl;
        p[i].get_data();
    }
}