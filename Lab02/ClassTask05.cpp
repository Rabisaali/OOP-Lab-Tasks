#include <iostream>
using namespace std;
int maximum (int* arr, int n);
int minimum (int* array, int n);
int main () {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "The maximum element of the array is: " << maximum(arr, n) << endl;
    cout << "The minimum element of teh array is: " << minimum(arr, n) << endl;
    return 0;
}

int maximum (int* arr, int n) {
    int max_val = arr[0];
    for (int i=1; i<n; i++) {
        if (max_val<arr[i]) max_val=arr[i];
    }
    return max_val;
}

int minimum (int* arr, int n) {
    int min_val = arr[0];
    for (int i=1; i<n; i++) {
        if (min_val>arr[i]) min_val=arr[i];
    }
    return min_val;
}