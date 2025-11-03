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

Node* insertAtGivenPosition(Node* last, int pos, int x) {
    Node* newNode = new Node(x);

    if (last == nullptr) {
        newNode->next = newNode;
        return newNode;
    }

    if (pos == 1) {
        newNode->next = last->next;
        last->next = newNode;

        return last;
    }

    Node* curr = last->next;

    for (int i = 1; i < pos - 1 && curr != last; i++) {
        curr = curr->next;
    }
    
    newNode->next = curr->next;
    curr->next = newNode;

    if (curr == last)
    last = newNode;

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

    cout << "Linked List before insertion\n";
    printList(last);

    int x = 5, pos;
    cout << "Enter a position: ";
    cin >> pos;
    last = insertAtGivenPosition(last, pos, x);

    cout << "Linked List after insertion\n";
    printList(last);

    return 0;
}