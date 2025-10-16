// Define a node in the linked list
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

function insertAtGivenPosition(head, pos, x) {
    if (pos < 1)
        return head;

    // head will change if pos = 1
    if (pos === 1) {
        let newNode = new Node(x);
        newNode.next = head;
        return newNode;
    }

    let curr = head

    /*Traverse to the node that will be
    present just before the new node*/
    for (let i = 1; i < pos - 1 && curr !== null; i++) {
        curr = curr.next;
    }

    /*If position is greater
    than the number of nodes*/
    if (curr === null)
        return head;

    let newNode = new Node(x);
    
    // update the next pointers
    newNode.next = curr.next;
    curr.next = newNode;

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

// Create the linked list: 1-> 2 -> 4
let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(4);
const x = 3, pos = 3
console.log("Linked List before insertion");
printList(head);

head = insertAtGivenPosition(head, pos, x);

console.log("Linked List after insertion");
printList(head);