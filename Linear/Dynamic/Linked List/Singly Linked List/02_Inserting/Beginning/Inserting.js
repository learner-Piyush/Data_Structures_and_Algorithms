// Define a node in the linked list
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// Function to insert a new node at the beginning of the list
function insertAtFront(head, x) {
    const newNode = new Node(x);
    newNode.next = head;
    return newNode;
}

function printList(head) {
    while (head !== null) {
        process.stdout.write(head.data.toString())
        if (head.next !== null)
            process.stdout.write(" -> ")
        head = head.next
    }
    console.log()
}

// Create the linked list: 2 -> 3 -> 4 -> 5
let head = new Node(2);
head.next = new Node(3);
head.next.next = new Node(4);
head.next.next.next = new Node(5);
const x = 1
console.log("Linked List before insertion");
printList(head);

// Insert a new node at the front of the list
head = insertAtFront(head, x);

console.log("Linked List after insertion");
printList(head);