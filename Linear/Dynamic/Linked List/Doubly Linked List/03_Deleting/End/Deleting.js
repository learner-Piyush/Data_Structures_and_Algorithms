class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

// Function to remove the last node
function deleteLastNode(head) {
    /*Check if the list is empty or If the
    list has only one node, delete it*/
    if (head === null || head.next === null) {
        return null
    }

    // Find the last node
    let last = head;
    while (last.next !== null) {
        last = last.next;
    }

    // Delete the last node
    last.prev.next = null;
    last = null;

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

head = deleteLastNode(head);

console.log("Linked List after deletion");
printList(head);