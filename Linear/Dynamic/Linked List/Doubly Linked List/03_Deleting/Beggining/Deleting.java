class Node {
    int data;
    Node prev;
    Node next;

    Node(int data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}

class DeletingBeginning {
    // Delete the head node and return the new head
    public static Node deleteHead(Node head) {
        // Check if the list is empty
        if (head == null)
        return null;

        Node temp = head;       // Store the current head in the temp

        head = head.next;       // Move the head pointer to the next node

        temp = null;            // Free the memory of the old head node

        // Set prev of the new head
        if (head != null)
        head.prev = null;

        return head;
    }

    public static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data);
            if (head.next != null)
            System.out.print(" <-> ");
            head = head.next;
        }

        System.out.println();
    }

    public static void main(String[] args) {
        // Create a hardcoded doubly linked list:
        // 1 <-> 2 <-> 3
        Node head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);

        head.next = second;
        second.prev = head;
        second.next = third;
        third.prev = second;

        System.out.println("Linked List before deletion");
        printList(head);

        head = deleteHead(head);
        
        System.out.println("Linked List after deletion");
        printList(head);
    }
}