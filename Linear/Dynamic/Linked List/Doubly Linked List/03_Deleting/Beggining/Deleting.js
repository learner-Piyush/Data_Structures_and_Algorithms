class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

// Delete the head node and return the new head
function deleteHead(head) {
    // Check if the list is empty
    if (head === null)
        return null;

    let temp = head;        // Store the current head in the temp

    head = head.next;       // Move the head pointer to the next node

    temp = null;            // Free the memory of the old head node

    // Set prev of the new head
    if (head !== null)
        head.prev = null;

    return head;
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

console.log("Linked List before deletion");
printList(head);

head = deleteHead(head);

console.log("Linked List after deletion");
printList(head);