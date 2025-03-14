#include <bits/stdc++.h>
using namespace std;
void printQueueElements(queue<int>q){
    while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main() {
    // push, pop, empty, size, front, back
    queue<int> numbers;
    numbers.push(1);
    numbers.push(12);
    numbers.push(21);
    numbers.push(13);
    numbers.push(11);
    printQueueElements(numbers);
    cout << "Front Element: " << numbers.front() << endl;
    cout << "Back Element: " << numbers.back() << endl;
    cout << "Size: " << numbers.size() << endl;
    cout << numbers.empty() << endl;
    return 0;
}
