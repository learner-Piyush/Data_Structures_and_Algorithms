class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

/*Function to insert a new node at
the end of doubly linked list*/
function insertAtEnd(head, x) {
    const newNode = new Node(x);        // Create a new node
    /*If the Linked List is empty, make
    the new node as the head and return*/
    if (head == null)
        return newNode;

    // Store the head reference in a temporary variable
    let last = head

    // Traverse till the last node
    while (last.next !== null) {
        last = last.next;
    }

    last.next = newNode;        // Set the next of last node to new node

    newNode.prev = last;        // Set prev of new node to last node

    return head;                // Return the head of the list
}

function printList(head) {
    while (head !== null) {
        process.stdout.write(head.data.toString())
        if (head.next !== null)
            process.stdout.write(" <-> ")
        head = head.next
    }
    console.log()
}

// Create a hardcoded doubly linked list:
// 1 <-> 2 <-> 3
let head = new Node(1);
let second = new Node(2);
let third = new Node(3);

head.next = second;
second.prev = head;
second.next = third;
third.prev = second;

const x = 4
console.log("Linked List before insertion");
printList(head);

// Insert a new node at the end of the list
head = insertAtEnd(head, x);

console.log("Linked List after insertion");
printList(head);