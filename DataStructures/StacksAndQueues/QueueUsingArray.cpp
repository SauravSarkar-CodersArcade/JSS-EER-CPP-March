#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;
public:
    Queue(){
        front = -1;
        rear = -1;
    }
    bool isEmpty(){
        return (front == -1 && rear == -1);
    }
    bool isFull(){
        return (rear == MAX_SIZE -1);
    }
    // push -> enqueue
    // pop -> dequeue
    void enqueue(int item){
        if (isFull()){
            cout << "Queue is full." << endl;
        }
        if (isEmpty()){
            front = rear = 0;
        } else{
            rear++;
        }
        arr[rear] = item;
        cout << "Enqueued item is: " << item << endl;
    }
    void dequeue(){
        if (isEmpty()){
            cout << "Queue is empty." << endl;
        }else if (front == rear){
            front = rear = -1;
        } else{
            front++;
        }
    }
    int size(){
        return rear+1;
    }
    void display(){
        for (int i = front; i <=rear ; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Queue queue;
    int arr[] = {2,1,3,5,4,0};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; ++i) {
        queue.enqueue(arr[i]);
    }
    queue.display();
    queue.dequeue();
    queue.display();
    return 0;
}
