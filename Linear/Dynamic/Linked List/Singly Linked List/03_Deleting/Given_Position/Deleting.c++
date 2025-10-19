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

Node* deleteGivenNode(Node* head, int pos) {
    Node* temp = head;

    if (head == nullptr || pos < 1)
    return nullptr;

    // Head is to be deleted
    if (pos == 1) {
        head = head->next;
        temp = nullptr;
        return head;
    }

    // Traverse to the node before the one to be deleted
    Node* prev = nullptr;
    for (int i = 1; i < pos && temp != nullptr; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr)
    return head;
    
    // Delete the node at the position
    prev->next = temp->next;

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
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
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