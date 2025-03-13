#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;
};

// Doubly Linked List Traversals

void forwardTraversal(Node* head){
    Node* temp = head;
    cout << "null<-";
    while (temp != nullptr){
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
void backwardTraversal(Node* tail){
    Node* temp = tail;
    cout << "null<-";
    while (temp != nullptr){
        cout << temp->data << "<->";
        temp = temp->prev;
    }
    cout << "null" << endl;
}
int main() {
    // null <- 1 <-> 2 <-> 3 <-> 4 -> null
    Node* head;
    Node* tail;
    Node* node = new Node();
    node->data = 1;
    node->next = nullptr;
    node->prev = nullptr;
    head = node;
    tail = node;

    // second
    node = new Node();
    node->data = 2;
    node->next = nullptr;
    node->prev = tail;
    tail->next = node;
    tail = node;

    // third
    node = new Node();
    node->data = 3;
    node->next = nullptr;
    node->prev = tail;
    tail->next = node;
    tail = node;

    // fourth
    node = new Node();
    node->data = 4;
    node->next = nullptr;
    node->prev = tail;
    tail->next = node;
    tail = node;

    cout << "Forward Traversal: ";
    forwardTraversal(head);
    cout << "Backward Traversal: ";
    backwardTraversal(tail);
    return 0;
}
