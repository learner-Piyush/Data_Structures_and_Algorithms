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

Node* deleteGivenNode(Node* head, int pos) {
    Node* temp = head;

    if (head == nullptr || pos < 1)
    return nullptr;

    // Head is to be deleted
    if (pos == 1) {
        head = head->next;
        temp = nullptr;
        if (head != nullptr)
        head->prev = nullptr;
        return head;
    }

    // Traverse to the node before the one to be deleted
    for (int i = 1; i < pos && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr)
    return head;

    if (temp->prev != nullptr)
    temp->prev->next = temp->next;

    if (temp->next != nullptr)
    temp->next->prev = temp->prev;
    
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

    int pos;

    cout << "Linked List before deletion\n";
    printList(head);

    cout << "Enter a position: ";
    cin >> pos;
    
    head = deleteGivenNode(head, pos);

    cout << "Linked List after deletion\n";
    printList(head);

    return 0;
}