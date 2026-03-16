#include<iostream>
using namespace std;

class Matrix {
    private:
        int matrix[2][2];

    public:
        void setMatrix() {
            cout << "Enter the elements of 2x2 matrix: " << endl;
            for (int i=0; i<2; i++) {
                for (int j=0; j<2; j++) {
                    cin >> matrix[i][j];
                }
            }
            cout << "\n";
        }

        void displayMatrix() {
            cout << "Displaying the matrix: " << endl;
            for (int i=0; i<2; i++) {
                for (int j=0; j<2; j++) {
                    cout << matrix[i][j] << " ";
                }
                cout << "\n";
            }
        }

        Matrix operator + (Matrix m) {
            Matrix result;
            for(int i=0; i<2; i++) {
                for (int j=0; j<2; j++) {
                    result.matrix[i][j] = m.matrix[i][j] + matrix[i][j];
                }
            }
            return result;
        }
};

int main () {
    Matrix m1, m2;
    m1.setMatrix();
    m2.setMatrix ();
    Matrix m3 = m1+m2; //m1.operator+(m2); operator overloading
    cout << "The sum of the matrices are: " << endl;
    m3.displayMatrix();
}