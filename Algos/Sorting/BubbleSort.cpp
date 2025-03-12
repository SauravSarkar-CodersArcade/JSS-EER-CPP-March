#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for (int i = 1; i < n; ++i) { // Number of iterations (n-1) for n elements
        for (int j = 0; j < n-1; ++j) { // Go till the second last element
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main() {
    int arr[] = {9,1,2,0,4,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,n);
    // For Each Loop
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
