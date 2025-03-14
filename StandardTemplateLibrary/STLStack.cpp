#include <bits/stdc++.h>
using namespace std;
void printStackElements(stack<int> s){
    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}
int main() {
    // push, pop, top, size, empty
    stack<int> numbers;
    numbers.push(1);
    numbers.push(11);
    numbers.push(21);
    numbers.push(31);
    numbers.push(12);
    printStackElements(numbers);
    numbers.pop();
    printStackElements(numbers);
    cout << "Size: " << numbers.size() << endl;
    cout << numbers.empty() << endl;
    return 0;
}
