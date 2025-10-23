class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

// Recursive function for forward traversal
function forwardTraversal(head) {
    if (head === null) {
        console.log()
        return
    }

    // Print current node's data
    process.stdout.write(head.data.toString())
    if (head.next !== null)
        process.stdout.write(" <-> ")

    // Recursive call with the next node
    forwardTraversal(head.next)
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

console.log("Forward Traversal: ")
forwardTraversal(head)