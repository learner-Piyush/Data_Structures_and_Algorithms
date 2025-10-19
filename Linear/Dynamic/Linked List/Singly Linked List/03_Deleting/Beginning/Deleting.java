class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
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

        return head;
    }

    // Function to print the linked list
    public static void printList(Node head) {
        while (head != null) {
            System.out.print(head.data);
            if (head.next != null)
            System.out.print(" -> ");
            head = head.next;
        }

        System.out.println();
    }

    public static void main(String[] args) {
        // Create the linked list: 8 -> 2 -> 3 -> 1 -> 7
        Node head = new Node(8);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(1);
        head.next.next.next.next = new Node(7);
        
        System.out.println("Linked List before deletion");
        printList(head);

        head = deleteHead(head);
        
        System.out.println("Linked List after deletion");
        printList(head);
    }
}