#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; ++i) { // Iterations
        int minIndex = i;
        for (int j = i+1; j < n; ++j) {
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if (minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main() {
    int arr[] = {9,1,2,0,4,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr,n);
    // For Each Loop
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
