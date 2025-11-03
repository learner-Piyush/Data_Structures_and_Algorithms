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

Node* deleteAtGivenPosition(Node* last, int pos) {
    Node* head = last->next;

    if ((last == nullptr || pos < 1) || (head == last && pos == 1)) {
        return nullptr;
    }

    if (pos == 1) {
        last->next = head->next;
        return last;
    }

    Node* prev = head;
    Node* curr = head->next;

    for (int i = 2; i < pos && curr != head; i++) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == head)
    return last;
    
    prev->next = curr->next;

    if (curr == last)
    last = prev;

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

    int pos;
    cout << "Enter a position: ";
    cin >> pos;
    last = deleteAtGivenPosition(last, pos);

    cout << "Linked List after deletion\n";
    printList(last);

    return 0;
}