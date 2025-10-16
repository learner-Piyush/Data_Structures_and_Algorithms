// Define a node in the linked list
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class InsertingBeginning {
    // Function to insert a new node at the beginning of the list
    public static Node insertAtFront(Node head, int x) {
        Node newNode = new Node(x);
        newNode.next = head;
        return newNode;
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
        // Create the linked list: 2 -> 3 -> 4 -> 5
        Node head = new Node(2);
        head.next = new Node(3);
        head.next.next = new Node(4);
        head.next.next.next = new Node(5);
        int x = 1;
        System.out.println("Linked List before insertion");
        printList(head);

        // Insert a new node at the front of the list
        head = insertAtFront(head, x);
        
        System.out.println("Linked List after insertion");
        printList(head);
    }
}