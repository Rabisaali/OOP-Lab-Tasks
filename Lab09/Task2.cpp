#include <iostream>
using namespace std;

class Notification {
    protected:
        string recipient;
    public:
        Notification(string r) {
            recipient = r;
        }

        virtual void sendNotification() = 0;
};

class EmailNotification : public Notification {
    string message;

    public:
        EmailNotification(string m, string r) : Notification(r) {
            message = m;
        }

        void sendNotification() {
            cout << "Email Notification" << endl;
            cout << "To: " << recipient <<endl;
            cout << "Message: " << message << endl;
            cout << "Status: Sent Successfully" << endl;
        }
};

class SMSNotification : public Notification {
    string message;

    public:
        SMSNotification(string m, string r) : Notification(r) {
            message = m;
        }

        void sendNotification() {
            cout << "SMS Notification" << endl;
            cout << "To: " << recipient <<endl;
            cout << "Message: " << message << endl;
            cout << "Status: Sent Successfully" << endl;
        }
};

class PushNotification : public Notification {
    string message;

    public:
        PushNotification(string m, string r) : Notification(r) {
            message = m;
        }

        void sendNotification() {
            cout << "Push Notification" << endl;
            cout << "To: " << recipient <<endl;
            cout << "Message: " << message << endl;
            cout << "Status: Sent Successfully" << endl;
        }
};

int main () {
    Notification* n;
    SMSNotification s = SMSNotification("Your OTP is 1234", "03001234567");
    n = &s;
    n->sendNotification();
}