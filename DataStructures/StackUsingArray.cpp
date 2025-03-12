#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Stack {
private:
    int arr[MAX_SIZE];
    int top;
public:
    Stack(){
        top = -1;
    }
    bool isFull(){
        return (top == MAX_SIZE -1);
    }
    bool isEmpty(){
        return (top == -1);
    }
    void push(int element){
        if (isFull()){
            cout << "Stack is full, can't add more elements." << endl;
        }
        top++;
        arr[top] = element;
    }
    void pop(){
        if (isEmpty()){
            cout << "Stack is empty, can't remove elements." << endl;
        }
        top--;
    }
    int peek(){
        if (isEmpty()){
            cout << "Stack is empty, can't display top." << endl;
            return -1;
        }
        return arr[top];
    }
    int size(){
        return top + 1;
    }
};
int main() {
    Stack stack;
    int arr[] = {4,1,2,3,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        stack.push(arr[i]); // 4 1 2 3 6
    }
    cout << "Top element: " << stack.peek() << endl;
    stack.pop();
    cout << "Top element: " << stack.peek() << endl;
    cout << stack.size() << endl;
    return 0;
}
