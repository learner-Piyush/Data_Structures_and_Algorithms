// Define a node in the linked list
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// Function to insert a new node at the end of the list
function insertAtFront(head, x) {
    const newNode = new Node(x);    // Create a new node
    
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

    /*Change the next pointer of the
    last node to point to the new node*/
    last.next = newNode;

    // Return the head of the list
    return head;
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

// Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);
head.next.next.next.next = new Node(5);
const x = 6
console.log("Linked List before insertion");
printList(head);

// Insert a new node at the end of the list
head = insertAtFront(head, x);

console.log("Linked List after insertion");
printList(head);