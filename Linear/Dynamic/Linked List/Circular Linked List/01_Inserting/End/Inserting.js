class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

function insertAtEnd(tail, x) {
    const newNode = new Node(x);

    if (tail === null) {
        newNode.next = newNode;
        return newNode;
    }

    newNode.next = tail.next;
    tail.next = newNode;

    tail = newNode;

    return tail;
}

function printList(last) {
    if (last === null)
        return;

    let head = last.next;
    let temp = head;

    do {
        process.stdout.write(temp.data.toString())
        temp = temp.next;
        if (temp !== head)
            process.stdout.write(" -> ");
    } while (temp !== head);

    console.log();
}

// Create circular linked list: 2 -> 3 -> 4
let first = new Node(2);
first.next = new Node(3);
first.next.next = new Node(4);

let last = first.next.next;
last.next = first;

console.log("Linked List before insertion");
printList(last);

const x = 5
last = insertAtEnd(last, x);

console.log("Linked List after insertion");
printList(last);