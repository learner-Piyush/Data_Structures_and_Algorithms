import readline from 'readline'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

function insertAtGivenPosition(last, pos, x) {
    const newNode = new Node(x);

    if (last === null) {
        newNode.next = newNode;
        return newNode;
    }

    if (pos === 1) {
        newNode.next = last.next;
        last.next = newNode;
    
        return last;
    }

    let curr = last.next;

    for (let i = 1; i < pos - 1 && curr !== last; i++) {
        curr = curr.next;
    }

    newNode.next = curr.next;
    curr.next = newNode

    if (curr === last)
        last = newNode;

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

console.log("Linked List before insertion");
printList(last);

rl.question("Enter a position: ", (ans) => {
    const x = 5
    const pos = parseInt(ans)

    last = insertAtGivenPosition(last, pos, x);
    
    console.log("Linked List after insertion");
    printList(last);
})
