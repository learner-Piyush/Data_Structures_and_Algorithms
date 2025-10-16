#include <iostream>
using namespace std;

// Define a node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert a new node at the beginning of the list
Node* insertAtFront(Node* head, int x) {
    Node* newNode = new Node(x);
    newNode->next = head;
    return newNode;
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr)
        cout << " -> ";
        head = head->next;
    }
    
    cout << endl;
}

int main() {
    // Create the linked list: 2 -> 3 -> 4 -> 5
    Node* head = new Node(2);
    head->next = new Node(3);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    int x = 1;
    cout << "Linked List before insertion\n";
    printList(head);
    
    // Insert a new node at the front of the list
    head = insertAtFront(head, x);

    cout << "Linked List after insertion\n";
    printList(head);

    return 0;
}