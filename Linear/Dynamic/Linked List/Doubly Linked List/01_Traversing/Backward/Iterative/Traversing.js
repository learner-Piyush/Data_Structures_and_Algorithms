class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

/*Function to traverse the doubly
linked list in backward direction*/
function backwardTraversal(tail) {
    while (tail !== null) {
        process.stdout.write(tail.data.toString())
        if (tail.prev !== null)
            process.stdout.write(" <-> ")
        tail = tail.prev
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

console.log("Backward Traversal: ")
backwardTraversal(third)