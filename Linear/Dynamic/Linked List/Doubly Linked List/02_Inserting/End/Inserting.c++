#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

/*Function to insert a new node at
the end of doubly linked list*/
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

    last->next = newNode;       // Set the next of last node to new node

    newNode->prev = last;       // Set prev of new node to last node

    return head;                // Return the head of the list
}

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr)
        cout << " <-> ";
        head = head->next;
    }

    cout << endl;
}

int main() {
    // Create a hardcoded doubly linked list:
    // 1 <-> 2 <-> 3
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    int x = 4;

    cout << "Linked List before insertion\n";
    printList(head);

    // Insert a new node at the end of the list
    head = insertAtEnd(head, x);

    cout << "Linked List after insertion\n";
    printList(head);

    return 0;
}