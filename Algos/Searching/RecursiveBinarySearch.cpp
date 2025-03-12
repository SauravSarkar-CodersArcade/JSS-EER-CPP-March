#include <iostream>
using namespace std;
int recursive_binary_search(int * arr, int n, int s, int e, int key){
    if (s <= e){
        int mid = (s+e)/2;
        if (arr[mid] == key){
            return mid;
        } else if (arr[mid] < key){
            // Right Side because start 's' changes
            return recursive_binary_search(arr,n,mid+1,e,key);
        } else{
            // Left Side because end 'e' changes
            return recursive_binary_search(arr,n,s,mid-1,key);
        }
    }return -1;
}
int main() {
    int arr[] = {3,5,7,10,13,17,56};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << recursive_binary_search(arr,n,0,n-1,10) << "\n";
    cout << recursive_binary_search(arr,n,0,n-1,56) << "\n";
    cout << recursive_binary_search(arr,n,0,n-1,100) << "\n";
    return 0;
}
