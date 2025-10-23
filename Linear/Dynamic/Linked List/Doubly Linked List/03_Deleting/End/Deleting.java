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

class DeletingEnd {
    // Function to remove the last node
    public static Node deleteLastNode(Node head) {
        /*Check if the list is empty or If the
        list has only one node, delete it*/
        if (head == null || head.next == null)
        return null;

        // Find the last node
        Node last = head;
        while (last.next != null) {
            last = last.next;
        }

        // Delete the last node
        last.prev.next = null;
        
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

        head = deleteLastNode(head);
        
        System.out.println("Linked List after deletion");
        printList(head);
    }
}