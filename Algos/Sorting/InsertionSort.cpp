#include <iostream>
using namespace std;
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; ++i) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp){
            // Shift Operation
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp; // Place the temp value at the space created
    }
}
int main() {
    int arr[] = {9,1,2,0,4,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,n);
    // For Each Loop
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
