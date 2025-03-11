#include <iostream>
using namespace std;
namespace Sumukha {
    int x = 200;
    void add(int a, int b) {
        cout << a + b << endl;
    }
}
namespace Arjitha {
    void add(int a, int b) {
        cout << a + b << endl;
    }
}
int main(){ // :: Scope Resolution Operator
    cout << "JSSATE\n";
    cout << "ECE/EIE/Robotics" << endl;
    cout << "Data Structures & Algorithms\n";
    cout << Sumukha::x << endl;
    Arjitha::add(1,3);
    return 0;
}