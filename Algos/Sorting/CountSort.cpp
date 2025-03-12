#include <iostream>
using namespace std;
void countSort(int arr[], int size){
    // Find the max
    int k = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > k){
            k = arr[i];
        }
    }
    // Create a count array of (0-9) 10 elements
    int count[10] = {0};
    // Calculate the frequency of each element
    for (int i = 0; i < size; ++i) {
        count[arr[i]]++;
    }
    // Calculate the cumulative count of the array
    // Supraj = index 0 (Skip), so start from index 1
    for (int i = 1; i <=k ; ++i) {
        // curr = curr + prev
        count[i] += count[i-1];
    }
    // Create the output array
    int output[size];
    // Start from the end of the array
    for (int i = size-1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }
    // Copy the output back to the input
    for (int i = 0; i < size; ++i) {
        arr[i] = output[i];
    }

}
int main() {
    int arr[] = {1,3,2,3,4,1,6,4,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting: ";
    for (int x : arr){
        cout << x << " ";
    }cout << endl;
    countSort(arr,size);
    cout << "After Sorting: ";
    for (int x : arr){
        cout << x << " ";
    }cout << endl;
    return 0;
}
