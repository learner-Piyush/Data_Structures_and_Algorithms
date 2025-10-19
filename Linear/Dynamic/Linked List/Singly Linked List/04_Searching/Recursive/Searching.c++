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

/*Checks whether x is
present in linked list*/
bool searchX(Node* head, int x) {
    // Base case
    if (head == nullptr)
    return false;

    /*If x is present in
    current node, return true*/
    if (head->data == x)
    return true;

    // Recur for remaining list
    return searchX(head->next, x);
}

void traverseList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr)
        cout << " -> ";
        head = head->next;
    }
    
    cout << endl;
}

int main() {
    // Create a hard-coded linked list:
    // 1 -> 2 -> 3 -> 4 ->5
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int x;

    traverseList(head);

    cout << "Enter a number: ";
    cin >> x;

    if (searchX(head, x)) {
        cout << "Number is present in the Linked List";
    } else {
        cout << "Number is not present in the Linked List";
    }
    
    return 0;
}