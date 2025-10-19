#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
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

    return head;
}

// Function to print the linked list
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
    // Create the linked list: 8 -> 2 -> 3 -> 1 -> 7
    Node* head = new Node(8);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(7);
    
    cout << "Linked List before deletion\n";
    printList(head);
    
    head = deleteHead(head);

    cout << "Linked List after deletion\n";
    printList(head);

    return 0;
}