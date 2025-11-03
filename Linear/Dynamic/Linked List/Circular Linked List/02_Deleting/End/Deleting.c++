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

Node* deleteAtEnd(Node* last) {
    Node* head = last->next;

    if (last == nullptr || last == head) {
        return nullptr;
    }

    Node* secondLast = head;
    while (secondLast->next != last) {
        secondLast = secondLast->next;
    }

    secondLast->next = head;

    last = secondLast;

    return last;
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

    cout << "Linked List before deletion\n";
    printList(last);

    last = deleteAtEnd(last);

    cout << "Linked List after deletion\n";
    printList(last);

    return 0;
}