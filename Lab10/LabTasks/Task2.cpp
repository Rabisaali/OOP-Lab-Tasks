#include<iostream>
using namespace std;

template <typename T>
class GenericArray {
    private:
        int size;
        T arr[100];

    public:
        GenericArray(int s) {
            size = s;
        }

        void inputElements() {
            cout << "Enter " << size << " elements: ";
            for(int i=0; i<size; i++) {
                cin >> arr[i];
            }
        }

        void displayElements() {
            cout << "Array elements: ";
            for (int i=0; i<size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        T maximumElements() {
            T maxVal = arr[0];
            for (int i=1; i<size; i++) {
                if (maxVal < arr[i]) maxVal = arr[i];
            }
            return maxVal;
        }
};

int main () {
    GenericArray<int> g1(5);
    g1.inputElements();
    cout << "The maximum value in the array is: " << g1.maximumElements() << endl;
    g1.displayElements();
    cout << endl;

    GenericArray<float> g2(5);
    g2.inputElements();
    cout << "The maximum value in the array is: " << g2.maximumElements() << endl;
    g2.displayElements();
    cout << endl;

    GenericArray<char> g3(5);
    g3.inputElements();
    cout << "The maximum value in the array is: " << g3.maximumElements() << endl;
    g3.displayElements();
    cout << endl;
}