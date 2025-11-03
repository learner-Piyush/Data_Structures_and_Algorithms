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

function deleteAtGivenPosition(last, pos) {
    let head = last.next;

    if ((last === null || pos < 1) || (head === last || pos === 1))
        return null;

    if (pos === 1) {
        last.next = head.next;
        return last;
    }

    let prev = head;
    let curr = head.next;

    for (let i = 2; i < pos && curr !== head; i++) {
        prev = curr;
        curr = curr.next;
    }

    if (curr === head)
        return last;

    prev.next = curr.next;

    if (curr === last)
        last = prev;

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

rl.question("Enter a position: ", (ans) => {
    const pos = parseInt(ans)

    last = deleteAtGivenPosition(last, pos);
    
    console.log("Linked List after deletion");
    printList(last);

    rl.close()
})