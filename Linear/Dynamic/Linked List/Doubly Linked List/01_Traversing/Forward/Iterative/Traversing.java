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

class IterativeForwardTraversing {
    /*Function to traverse the doubly
    linked list in forward direction*/
    public static void forwardTraversal(Node head) {
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

        System.out.print("Forward Traversal: ");
        forwardTraversal(head);
    }
}