#include <iostream>
using namespace std;

class Device {
    public:
        string brand;

        Device(string b) {
            brand = b;
        }

        void deviceShow() {
            cout << "Brand name: " << brand << endl;
        }
};

class Camera : virtual public Device {
    public:
        int resolution;
    
        Camera (string b, int r) : Device (b) {
            resolution = r;
        }

        void Camerashow () {
            cout << "The camera has a resolution of " << resolution << " megapixels" << endl;
        }
};

class Phone : virtual public Device {
    public:
        int storage;

        Phone (string b, int s) : Device (b) {
            storage = s;
        }

        void showPhone() {
            cout << "The phone has a storage of " << storage << " gb" << endl;
        }
};

class SmartPhone : public Phone, public Camera {
    public:
        SmartPhone (string b, int s, int r) : Phone (b, s), Camera (b, r), Device(b) {}  
        
        void showSmartPhone () {
            cout << "This is the smart phone class" << endl;
        }
};

int main () {
    SmartPhone p1("Samsung", 128, 56);
    p1.showSmartPhone();
    p1.deviceShow();
    p1.showPhone();
    p1.Camerashow();

    cout << "Address via Phone path: ";
    cout << static_cast<Device*>(static_cast<Phone*>(&p1)) << endl;

    cout << "Address via Camera path: ";
    cout << static_cast<Device*>(static_cast<Camera*>(&p1)) << endl;
}