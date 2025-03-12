#include <iostream>
using namespace std;
int linearSearch(int * arr, int n, int key){
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key){
            return i;
        }
    }
    return -1; // Invalid -> Not Found
}
int main() {
    int arr[] = {9,2,1,3,4,5,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << linearSearch(arr,n,1);
    return 0;
}
