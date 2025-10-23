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

class InsertingEnd {
    /*Function to insert a new node at
    the end of doubly linked list*/
    public static Node insertAtEnd(Node head, int x) {
        Node newNode = new Node(x);     // Create a new node

        /*If the Linked List is empty, make
        the new node as the head and return*/
        if (head == null)
        return newNode;

        // Store the head reference in a temporary variable
        Node last = head;

        // Traverse till the last node
        while (last.next != null) {
            last = last.next;
        }

        last.next = newNode;        // Set the next of last node to new node

        newNode.prev = last;        // Set prev of new node to last node

        return head;                // Return the head of the list
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

        int x = 4;
        System.out.println("Linked List before insertion");
        printList(head);

        // Insert a new node at the end of the list
        head = insertAtEnd(head, x);
        
        System.out.println("Linked List after insertion");
        printList(head);
    }
}