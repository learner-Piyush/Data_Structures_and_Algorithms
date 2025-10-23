#include <iostream>
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

// Recursive function for forward traversal
void forwardTraversal(Node* head) {
    if (head == nullptr) {
        cout << endl;
        return;
    }

    // Print current node's data
    cout << head->data;
    if (head->next != nullptr)
    cout << " <-> ";

    // Recursive call with the next node
    forwardTraversal(head->next);
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

    cout << "Forward Traversal: ";
    forwardTraversal(head);

    return 0;
}