class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

// Recursive function for backward traversal
function backwardTraversal(tail) {
    if (tail === null) {
        console.log()
        return
    }

    // Print current node's data
    process.stdout.write(tail.data.toString())
    if (tail.prev !== null)
        process.stdout.write(" <-> ")

    // Recursive call with the previous node
    backwardTraversal(tail.prev)
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

console.log("Backward Traversal: ")
backwardTraversal(third)