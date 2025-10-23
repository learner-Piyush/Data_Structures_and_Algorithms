import readline from 'readline'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

class Node {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

function deleteGivenNode(head, pos) {
    let temp = head;

    if (head === null || pos < 1)
        return null;

    // Head is to be deleted
    if (pos === 1) {
        head = head.next;
        temp = null;
        if (head !== null)
            head.prev = null;
        return head;
    }

    // Traverse to the node before the one to be deleted
    for (let i = 1; i < pos && temp !== null; i++) {
        temp = temp.next;
    }

    if (temp === null)
        return head;

    if (temp.prev !== null)
        temp.prev.next = temp.next;

    if (temp.next !== null)
        temp.next.prev = temp.prev;

    return head;
}

function printList(head) {
    while (head !== null) {
        process.stdout.write(head.data.toString())
        if (head.next !== null)
            process.stdout.write(" <-> ")
        head = head.next
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

console.log("Linked List before deletion");
printList(head);

rl.question("Enter a position: ", (ans) => {
    const pos = parseInt(ans)

    head = deleteGivenNode(head, pos);

    console.log("Linked List after deletion");
    printList(head);
    
    rl.close()
})