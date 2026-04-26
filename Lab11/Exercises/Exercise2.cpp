#include<iostream>
#include<fstream>
using namespace std;

int main () {
    fstream file;
    file.open("Exercise2.txt", ios::in);
    if (!file) {
        cout << "Error: File not found!" << endl;
        return 0;
    }
    int arr[10];
    for (int i=0; i<10; i++) {
        file >> arr[i];

        if (arr[i]%2 == 0) cout << arr[i] << " ";
    }
    file.close();
    return 0;
}