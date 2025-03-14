#include <bits/stdc++.h>
using namespace std;
int main() {
    set<int> numbers; // Unique data, ascending order, no duplicates, sorted
    numbers.insert(1);
    numbers.insert(12);
    numbers.insert(1);
    numbers.insert(13);
    numbers.insert(1);
    numbers.insert(21);
    numbers.insert(1);
    numbers.insert(11);
    for (int x : numbers) {
        cout << x << " ";
    }cout << endl;
    return 0;
}
