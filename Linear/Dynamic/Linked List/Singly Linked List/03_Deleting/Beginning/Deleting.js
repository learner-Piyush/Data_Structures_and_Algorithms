class Node {
    constructor(data) {
        this.data = data;
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

    return head;
}

// Function to print the linked list
function printList(head) {
    while (head !== null) {
        process.stdout.write(head.data.toString())
        if (head.next !== null)
            process.stdout.write(" -> ")
        head = head.next
    }
    console.log()
}

// Create the linked list: 8 -> 2 -> 3 -> 1 -> 7
let head = new Node(8);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(1);
head.next.next.next.next = new Node(7);

console.log("Linked List before deletion");
printList(head);

head = deleteHead(head);

console.log("Linked List after deletion");
printList(head);