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

class InsertingBeginning {
    /*Function to insert a new node at
    the front of doubly linked list*/
    public static Node insertAtFront(Node head, int x) {
        Node newNode = new Node(x);     // Create a new node
        newNode.next = head;            // Make next of new node as head
        if (head != null)
        head.prev = newNode;            // Change prev of head node to new node
        return newNode;                 // Return the new node as the head
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
        // 2 <-> 3 <-> 4
        Node head = new Node(2);
        Node second = new Node(3);
        Node third = new Node(4);

        head.next = second;
        second.prev = head;
        second.next = third;
        third.prev = second;

        int x = 1;
        System.out.println("Linked List before insertion");
        printList(head);

        // Insert a new node at the front of the list
        head = insertAtFront(head, x);
        
        System.out.println("Linked List after insertion");
        printList(head);
    }
}