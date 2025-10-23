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

// Function to insert a new node at a given position
Node* insertAtGivenPosition(Node* head, int pos, int x) {
    if (pos < 1)
    return head;

    // head will change if pos = 1
    if (pos == 1) {
        Node* newNode = new Node(x);
        newNode->next = head;
        if (head != nullptr)
        head->prev = newNode;
        return newNode;
    }

    Node* curr = head;

    /*Traverse to the node that will be
    present just before the new node*/
    for (int i = 1; i < pos - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }

    /*If position is greater
    than the number of nodes*/
    if (curr == nullptr)
    return head;

    Node* newNode = new Node(x);

    // update the next and previous pointers
    newNode->next = curr->next;
    newNode->prev = curr;
    curr->next = newNode;
    if (newNode->next != nullptr)
    newNode->next->prev = newNode;
    
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
    // 1 <-> 2 <-> 4
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(4);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    int x = 3, pos = 3;
    cout << "Linked List before insertion\n";
    printList(head);
    
    head = insertAtGivenPosition(head, pos, x);

    cout << "Linked List after insertion\n";
    printList(head);

    return 0;
}