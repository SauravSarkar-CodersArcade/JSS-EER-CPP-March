#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the square matrix:" << endl;
    cin >> n;
    int ** squareMatrix = new int * [n]; // n Rows
    for (int i = 0; i < n; ++i) {
        // n Columns for each Row
        squareMatrix[i] = new int [n];
    }
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> squareMatrix[i][j];
        }
    }
    cout << "The matrix elements are:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << squareMatrix[i][j] << " ";
        }cout << endl;
    }
    delete[]squareMatrix;
    return 0;
}
