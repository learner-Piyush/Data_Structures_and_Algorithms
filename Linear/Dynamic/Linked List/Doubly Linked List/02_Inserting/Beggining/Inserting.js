class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

/*Function to insert a new node at
the front of doubly linked list*/
function insertAtFront(head, x) {
    const newNode = new Node(x);        // Create a new node
    newNode.next = head;                // Make next of new node as head
    if (head != null)
        head.prev = newNode;            // Change prev of head node to new node
    return newNode;                     // Return the new node as the head
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
// 2 <-> 3 <-> 4
let head = new Node(2);
let second = new Node(3);
let third = new Node(4);

head.next = second;
second.prev = head;
second.next = third;
third.prev = second;

const x = 1
console.log("Linked List before insertion");
printList(head);

// Insert a new node at the front of the list
head = insertAtFront(head, x);

console.log("Linked List after insertion");
printList(head);