class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

function deleteAtEnd(last) {
    let head = last.next;

    if (last === null || last === head)
        return null;

    let secondLast = head;
    while (secondLast.next !== last) {
        secondLast = secondLast.next;
    }

    secondLast.next = head;

    last = secondLast;

    return last;
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

console.log("Linked List before deletion");
printList(last);

last = deleteAtEnd(last);

console.log("Linked List after deletion");
printList(last);