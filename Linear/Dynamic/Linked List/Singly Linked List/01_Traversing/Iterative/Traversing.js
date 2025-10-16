// A Linked List Node
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// Function to traverse and print the singly linked list
function traverseList(head) {
    while (head !== null) {
        process.stdout.write(head.data.toString())
        if (head.next !== null)
            process.stdout.write(" -> ")
        head = head.next
    }
    console.log()
}

// Create a hard-coded linked list:
// 10 -> 20 -> 30 -> 40
let head = new Node(10);
head.next = new Node(20);
head.next.next = new Node(30);
head.next.next.next = new Node(40);

traverseList(head)