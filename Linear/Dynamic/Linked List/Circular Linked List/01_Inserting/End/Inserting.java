class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class InsertingEnd {
    public static Node insertAtEnd(Node tail, int x) {
        Node newNode = new Node(x);

        if (tail == null) {
            newNode.next = newNode;
            return newNode;
        }

        newNode.next = tail.next;
        tail.next = newNode;

        tail = newNode;

        return tail;
    }

    public static void printList(Node last) {
        if (last == null)
        return;

        Node head = last.next;
        Node temp = head;

        do {
            System.out.print(temp.data);
            temp = temp.next;
            if (temp != head)
            System.out.print(" -> ");
        } while (temp != head);

        System.out.println();
    }

    public static void main(String[] args) {
        // Create circular linked list: 2 -> 3 -> 4
        Node first = new Node(2);
        first.next = new Node(3);
        first.next.next = new Node(4);

        Node last = first.next.next;
        last.next = first;

        System.out.println("Linked List before insertion");
        printList(last);

        int x = 5;
        last = insertAtEnd(last, x);

        System.out.println("Linked List after insertion");
        printList(last);
    }
}