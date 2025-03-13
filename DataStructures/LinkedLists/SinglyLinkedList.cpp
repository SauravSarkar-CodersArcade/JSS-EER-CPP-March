#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};

// Method to display all the elements of the Singly Linked List

void printListElements(Node* head){
    Node* curr = head;
    while (curr != nullptr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "null";
    cout << endl;
}

// Insert Operations

void insertAtFront(Node** head, int newValue){ // *head-> pointer **head -> value
    // Create a New Node
    Node* newNode = new Node();
    newNode->data = newValue;
    // Make the new node point to the head
    newNode->next = *head;
    // Update the head of the linked list to the new node
    *head = newNode;
}
void insertAtEnd(Node** head, int newValue){
    // Create a New Node
    Node* newNode = new Node();
    newNode->data = newValue;
    // Point the new node to null as it will become the tail node
    newNode->next = nullptr;
    // Empty List
    if (*head == nullptr){
        *head = newNode;
        return;
    }
    // List with multiple nodes
    Node* last = *head;
    while (last->next != nullptr){
        last = last->next;
    }
    last->next = newNode;
}
void insertAfterSpecific(Node* previous, int newValue){
    if (previous == nullptr){
        cout << "Previous Node cannot be null." << endl;
        return;
    }
    // Create a New Node
    Node* newNode = new Node();
    newNode->data = newValue;
    newNode->next = previous->next; // Preserve the connection
    previous->next = newNode; // Add the new connection

}

// Delete Operations

void deleteFrontNode(Node** head){
    // Empty
    if(*head == nullptr){
        cout << "List is empty. Can't delete the head node." << endl;
        return;
    }
    Node* temp = *head;
    *head = (*head)->next;
    delete temp;
}

void deleteEndNode(Node** head){
    // Empty
    if(*head == nullptr){
        cout << "List is empty. Can't delete the tail node." << endl;
        return;
    }
    // Single element
    if ((*head)->next == nullptr){
        delete *head;
        *head = nullptr;
        return;
    }
    // Multiple nodes
    Node* last = *head;
    Node* secondLast = nullptr;
    while (last->next != nullptr){
        secondLast = last;
        last = last->next;
    }
    delete last;
    secondLast->next = nullptr;
}

void deleteSpecificNodeWithTarget(Node** head, int targetValue){
    // Empty
    if(*head == nullptr){
        cout << "List is empty. Can't delete the target node." << endl;
        return;
    }
    // Head is the target node
    if ((*head)->data == targetValue){
        Node* temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }
    // Multiple Nodes
    Node* curr = *head;
    Node* prev = nullptr;
    while (curr != nullptr && curr->data != targetValue){
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr){
        cout << "Target: " << targetValue <<  " not found in list." << endl;
        return;
    }
    prev->next = curr->next;
    delete curr;
}
int main() {
    // Manual Creation Of A Linked List 1->2->3->null
//    Node* head = new Node();
//    head->data = 1;
//    Node* second = new Node();
//    second->data = 2;
//    Node* third = new Node();
//    third->data = 3;
//    head->next = second;
//    second->next = third;
//    third->next = nullptr;

    Node* head = nullptr;

    insertAtFront(&head, 3);
    insertAtFront(&head, 2);
    insertAtFront(&head, 1);

    int arr[] = {4,5,6,7};

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; ++i) {
        insertAtEnd(&head, arr[i]);
    }

    insertAfterSpecific(nullptr, 100);

    insertAfterSpecific(head, 100);
    printListElements(head);

    insertAfterSpecific(head->next,200);
    printListElements(head);

    // cout << "Size of node: " << sizeof(head);

    cout << "List before deleting the head: " << endl;
    printListElements(head);

    deleteFrontNode(&head);

    cout << "List after deleting the head: " << endl;
    printListElements(head);

    cout << "List before deleting the tail: " << endl;
    printListElements(head);

    deleteEndNode(&head);

    cout << "List after deleting the tail: " << endl;
    printListElements(head);

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    cout << "List before deleting target node: " << target << endl;
    printListElements(head);

    deleteSpecificNodeWithTarget(&head, target);

    cout << "List after deleting target node: " << target << endl;
    printListElements(head);
    return 0;
}
