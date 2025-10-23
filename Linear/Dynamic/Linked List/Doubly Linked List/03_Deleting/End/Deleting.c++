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

// Function to remove the last node
Node* deleteLastNode(Node* head) {
    /*Check if the list is empty or If the
    list has only one node, delete it*/
    if (head == nullptr || head->next == nullptr)
    return nullptr;

    // Find the last node
    Node* last = head;
    while (last->next != nullptr) {
        last = last->next;
    }
    
    // Delete the last node
    last->prev->next = nullptr;
    last = nullptr;

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
    
    head = deleteLastNode(head);

    cout << "Linked List after deletion\n";
    printList(head);

    return 0;
}