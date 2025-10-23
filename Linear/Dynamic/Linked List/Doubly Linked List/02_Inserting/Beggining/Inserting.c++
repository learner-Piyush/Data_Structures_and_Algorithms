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
the front of doubly linked list*/
Node* insertAtFront(Node* head, int x) {
    Node* newNode = new Node(x);    // Create a new node
    newNode->next = head;           // Make next of new node as head
    if (head != nullptr)
    head->prev = newNode;           // Change prev of head node to new node
    return newNode;                 // Return the new node as the head
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
    // 2 <-> 3 <-> 4
    Node* head = new Node(2);
    Node* second = new Node(3);
    Node* third = new Node(4);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    int x = 1;

    cout << "Linked List before insertion\n";
    printList(head);

    // Insert a new node at the front of the list
    head = insertAtFront(head, x);

    cout << "Linked List after insertion\n";
    printList(head);

    return 0;
}