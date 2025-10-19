class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

// Function to remove the last node
function deleteLastNode(head) {
    /*Check if the list is empty or If the
    list has only one node, delete it*/
    if (head === null || head.next === null) {
        return null
    }

    // Find the second last node
    let secondLast = head;
    while (secondLast.next.next !== null) {
        secondLast = secondLast.next;
    }

    // Delete the last node
    secondLast.next = null;

    return head;
}

// Function to print the linked list
function printList(head) {
    while (head !== null) {
        process.stdout.write(head.data.toString())
        if (head.next !== null)
            process.stdout.write(" -> ")
        head = head.next
    }
    console.log()
}

// Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);
head.next.next.next.next = new Node(5);

console.log("Linked List before deletion");
printList(head);

head = deleteLastNode(head);

console.log("Linked List after deletion");
printList(head);