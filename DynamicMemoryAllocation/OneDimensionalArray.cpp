#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    // One Dimensional Array -> 1 Row
    int * oneD = new int[n]; // Allocation
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> oneD[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << oneD[i] << " ";
    }
    delete[]oneD; // De-Allocation
    return 0;
}
