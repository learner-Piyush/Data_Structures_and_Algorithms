// Define a node in the linked list
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class InsertingEnd {
    // Function to insert a new node at the end of the list
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

        /*Change the next pointer of the
        last node to point to the new node*/
        last.next = newNode;

        // Return the head of the list
        return head;
    }

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
        // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);
        head.next.next.next.next = new Node(5);
        int x = 6;
        System.out.println("Linked List before insertion");
        printList(head);

        // Insert a new node at the end of the list
        head = insertAtEnd(head, x);
        
        System.out.println("Linked List after insertion");
        printList(head);
    }
}