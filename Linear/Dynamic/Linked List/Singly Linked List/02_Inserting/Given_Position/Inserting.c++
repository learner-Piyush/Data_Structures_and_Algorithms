#include <iostream>
using namespace std;

// Define a node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

Node* insertAtGivenPosition(Node* head, int pos, int x) {
    if (pos < 1)
    return head;

    // head will change if pos = 1
    if (pos == 1) {
        Node* newNode = new Node(x);
        newNode->next = head;
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

    // update the next pointers
    newNode->next = curr->next;
    curr->next = newNode;
    
    return head;
}

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
    // Create the linked list: 1 -> 2 -> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(4);
    int x = 3, pos = 3;
    cout << "Linked List before insertion\n";
    printList(head);
    
    head = insertAtGivenPosition(head, pos, x);

    cout << "Linked List after insertion\n";
    printList(head);

    return 0;
}