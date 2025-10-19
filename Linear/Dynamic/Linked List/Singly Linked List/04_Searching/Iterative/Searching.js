import readline from 'readline'

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
})

// A Linked List Node
class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

/*Checks whether x is
present in linked list*/
function searchX(head, x) {
    /*Initialize curr with
    the head of linked list*/
    let curr = head;

    // Iterate over all the nodes
    while (curr !== null) {
        /*If the current node's value
        is equal to x, return true*/
        if (curr.data === x)
            return true;

        // Move to the next node
        curr = curr.next;
    }

    /*If there is no node with
    value as x, return false*/
    return false;
}

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
// 1 -> 2 -> 3 -> 4 -> 5
let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);
head.next.next.next.next = new Node(5);

traverseList(head)

rl.question("Enter a number: ", (ans) => {
    const x = parseInt(ans)

    if (searchX(head, x)) {
        console.log("Number is present in the Linked List")
    } else {
        console.log("Number is not present in the Linked List")
    }
    
    rl.close()
})