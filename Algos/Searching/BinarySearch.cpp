#include <iostream>
using namespace std;
int binarySearch(int * arr, int n, int key){
    int s = 0;
    int e = n-1;
    while (s <= e){
        int mid = (s+e)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            // Move to the right hand side
            s = mid + 1;
        }else{
            // Move to the left hand side
            e = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2,4,6,8,11,23,45,67};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr,n,23) << endl;
    cout << binarySearch(arr,n,0) << endl;
    return 0;
}
