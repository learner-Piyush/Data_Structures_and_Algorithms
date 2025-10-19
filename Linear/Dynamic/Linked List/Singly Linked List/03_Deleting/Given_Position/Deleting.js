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

function deleteGivenNode(head, pos) {
    let temp = head;

    if (head === null || pos < 1)
        return null;

    // Head is to be deleted
    if (pos === 1) {
        head = head.next;
        temp = null;
        return head;
    }

    // Traverse to the node before the one to be deleted
    let prev = null;
    for (let i = 1; i < pos && temp !== null; i++) {
        prev = temp;
        temp = temp.next;
    }

    if (temp === null)
        return head;

    prev.next = temp.next;

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

let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);

console.log("Linked List before deletion");
printList(head);

rl.question("Enter a position: ", (ans) => {
    const pos = parseInt(ans)

    head = deleteGivenNode(head, pos);

    console.log("Linked List after deletion");
    printList(head);
    
    rl.close()
})