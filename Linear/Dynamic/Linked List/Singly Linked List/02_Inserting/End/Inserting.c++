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

// Function to insert a new node at the end of the list
Node* insertAtEnd(Node* head, int x) {
    Node* newNode = new Node(x);    // Create a new node
    
    /*If the Linked List is empty, make
    the new node as the head and return*/
    if (head == nullptr)
    return newNode;

    // Store the head reference in a temporary variable
    Node* last = head;

    // Traverse till the last node
    while (last->next != nullptr) {
        last = last->next;
    }

    /*Change the next pointer of the
    last node to point to the new node*/
    last->next = newNode;

    // Return the head of the list
    return head;
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
    // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int x = 6;
    cout << "Linked List before insertion\n";
    printList(head);
    
    // Insert a new node at the end of the list
    head = insertAtEnd(head, x);

    cout << "Linked List after insertion\n";
    printList(head);

    return 0;
}