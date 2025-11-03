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

Node* insertAtEnd(Node* tail, int x) {
    Node* newNode = new Node(x);

    if (tail == nullptr) {
        newNode->next = newNode;
        return newNode;
    }
    
    newNode->next = tail->next;
    tail->next = newNode;

    tail = newNode;

    return tail;
}

void printList(Node* last) {
    if (last == nullptr)
    return;

    Node* head = last->next;
    Node* temp = head;

    do {
        cout << temp->data;
        temp = temp->next;
        if (temp != head)
        cout << " -> ";
    } while (temp != head);
    
    cout << endl;
}

int main() {
    // Create circular linked list: 2 -> 3 -> 4
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node* last = first->next->next;
    last->next = first;

    cout << "Linked List before insertion\n";
    printList(last);

    int x = 5;
    last = insertAtEnd(last, x);

    cout << "Linked List after insertion\n";
    printList(last);

    return 0;
}