class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class DeletingEnd {
    // Function to remove the last node
    public static Node deleteLastNode(Node head) {
        /*Check if the list is empty or If the
        list has only one node, delete it*/
        if (head == null || head.next == null)
        return null;

        // Find the second last node
        Node secondLast = head;
        while (secondLast.next.next != null) {
            secondLast = secondLast.next;
        }

        // Delete the last node
        secondLast.next = null;
        
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
        // Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);
        head.next.next.next.next = new Node(5);
        
        System.out.println("Linked List before deletion");
        printList(head);

        head = deleteLastNode(head);
        
        System.out.println("Linked List after deletion");
        printList(head);
    }
}