#include <iostream>
using namespace std;

class Product {
private:
    const int productID;   
public:
    
    Product(int id) : productID(id) {}

    
    void display() const {
        cout << "Product ID: " << productID << endl;
    }
};

int main() {

    Product p1(101);
    Product p2(102);
    Product p3(103);

    p1.display();
    p2.display();
    p3.display();

    return 0;
}