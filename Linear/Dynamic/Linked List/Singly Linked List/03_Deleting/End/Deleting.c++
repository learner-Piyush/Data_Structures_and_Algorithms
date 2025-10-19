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

// Function to remove the last node
Node* deleteLastNode(Node* head) {
    /*Check if the list is empty or If the
    list has only one node, delete it*/
    if (head == nullptr || head->next == nullptr)
    return nullptr;

    // Find the second last node
    Node* secondLast = head;
    while (secondLast->next->next != nullptr) {
        secondLast = secondLast->next;
    }
    
    // Delete the last node
    secondLast->next = nullptr;

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
    // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    cout << "Linked List before deletion\n";
    printList(head);
    
    head = deleteLastNode(head);

    cout << "Linked List after deletion\n";
    printList(head);

    return 0;
}