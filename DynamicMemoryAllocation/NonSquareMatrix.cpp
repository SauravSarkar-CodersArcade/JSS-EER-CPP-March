#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    cout << "Enter the number of cols:" << endl;
    cin >> m;
    int ** squareMatrix = new int * [n]; // n Rows
    for (int i = 0; i < n; ++i) {
        // m Columns for each Row
        squareMatrix[i] = new int [m];
    }
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> squareMatrix[i][j];
        }
    }
    cout << "The matrix elements are:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << squareMatrix[i][j] << " ";
        }cout << endl;
    }
    delete[]squareMatrix;
    return 0;
}
