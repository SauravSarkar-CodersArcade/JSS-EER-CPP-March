#include <iostream>
using namespace std;
int binarySearchSquareRoot(int n){
    int ans = -1;
    int s = 0;
    int e = n;
    while (s <= e){
        int mid = (s+e)/2;
        int square = mid * mid;
        if (square == n){
            return mid;
        }else if (square < n){
            ans = mid;
            s = mid +1;
        } else{
            e = mid -1;
        }
    }
    return ans;
}
int main() {
    cout << binarySearchSquareRoot(37);
    return 0;
}
