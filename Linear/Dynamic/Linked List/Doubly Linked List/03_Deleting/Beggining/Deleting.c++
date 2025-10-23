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

// Delete the head node and return the new head
Node* deleteHead(Node* head) {
    // Check if the list is empty
    if (head == nullptr)
    return nullptr;

    Node* temp = head;      // Store the current head in the temp

    head = head->next;      // Move the head pointer to the next node

    temp = nullptr;         // Free the memory of the old head node

    // Set prev of the new head
    if (head != nullptr)
    head->prev = nullptr;

    return head;
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

    cout << "Linked List before deletion\n";
    printList(head);
    
    head = deleteHead(head);

    cout << "Linked List after deletion\n";
    printList(head);

    return 0;
}