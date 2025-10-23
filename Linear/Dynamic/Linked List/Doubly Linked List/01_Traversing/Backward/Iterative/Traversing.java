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

class IterativeBackwardTraversing {
    /*Function to traverse the doubly
    linked list in backward direction*/
    public static void backwardTraversal(Node tail) {
        while (tail != null) {
            System.out.print(tail.data);
            if (tail.prev != null)
            System.out.print(" <-> ");
            tail = tail.prev;
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

        System.out.print("Backward Traversal: ");
        backwardTraversal(third);
    }
}