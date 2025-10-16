#include <iostream>
using namespace std;

// A Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to traverse and print the singly linked list (recursive)
void traverseList(Node* head) {
    // base condition is when the head is nullptr
    if (head == nullptr) {
        cout << endl;
        return;
    }

    // printing the current node data
    cout << head->data;

    // print arrow if not the last node
    if (head->next != nullptr)
    cout << " -> ";

    // moving to the next node
    traverseList(head->next);
}

int main() {
    // Create a hard-coded linked list:
    // 10 -> 20 -> 30 -> 40
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    traverseList(head);

    return 0;
}