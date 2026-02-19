#include <iostream>
using namespace std;

class Patient {
    private:
       const string patientName;
       const int patientID;
    public:
        Patient(int id = 0, string name="Unknown") : patientID(id), patientName(name)  {}

        void display() const {
            cout << "Patient ID: " << patientID << endl;
            cout << "Patient Name: " << patientName << endl;
        }
};

class Hospital {
    private:
        Patient* patients[10]; // using pointers... because otherwise it was showing errors since the data members in the patient are constants!
        static int totalPatients;
    
        public:
            Hospital() {
                for (int i = 0; i < 10; i++) patients[i] = nullptr;
            }
            void addPatient (int id, string name) {
                if (totalPatients<10) {
                    patients[totalPatients] = new Patient(id, name);
                    totalPatients++;
                }
            }

            void diplayPatients() const {
                for (int i=0; i<totalPatients; i++) {
                    patients[i]->display();
                }
            }

            static void showTotalPatients() {
                cout << "Total Patients: " << totalPatients << endl;
            }
};

int Hospital::totalPatients = 0;

int main () {
    Hospital h;
    h.addPatient(101, "Ali");
    h.addPatient(102, "Sara");
    h.addPatient(103, "Jamshed");

    h.diplayPatients();

    Hospital::showTotalPatients();
}