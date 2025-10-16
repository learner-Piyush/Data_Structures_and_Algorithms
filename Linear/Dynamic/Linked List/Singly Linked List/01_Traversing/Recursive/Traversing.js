// A Linked List Node
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// Function to traverse and print the singly linked list (recursive)
function traverseList(head) {
    // base condition is when the head is null
    if (head === null) {
        console.log()
        return
    }

    // printing the current node data
    process.stdout.write(head.data.toString())

    // print arrow if not the last node
    if (head.next !== null)
        process.stdout.write(" -> ")

    // moving to the next node
    traverseList(head.next)
}

// Create a hard-coded linked list:
// 10 -> 20 -> 30 -> 40
let head = new Node(10);
head.next = new Node(20);
head.next.next = new Node(30);
head.next.next.next = new Node(40);

traverseList(head)