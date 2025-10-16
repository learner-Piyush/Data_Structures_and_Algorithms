// A Linked List Node
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class RecursiveTraversingList {
    // Function to traverse and print the singly linked list (recursive)
    public static void traverseList(Node head) {
        // base condition is when the head is null
        if (head == null) {
            System.out.println();
            return;
        }

        // printing the current node data
        System.out.print(head.data);

        // print arrow if not the last node
        if (head.next != null)
        System.out.print(" -> ");

        // moving to the next node
        traverseList(head.next);
    }

    public static void main(String[] args) {
        // Create a hard-coded linked list:
        // 10 -> 20 -> 30 -> 40
        Node head = new Node(10);
        head.next = new Node(20);
        head.next.next = new Node(30);
        head.next.next.next = new Node(40);

        traverseList(head);
    }
}