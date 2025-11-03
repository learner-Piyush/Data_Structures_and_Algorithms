class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class DeletingEnd {
    public static Node deleteAtEnd(Node last) {
        Node head = last.next;

        if (last == null || last == head) {
            return null;
        }

        Node secondLast = head;
        while (secondLast.next != last) {
            secondLast = secondLast.next;
        }

        secondLast.next = head;

        last = secondLast;

        return last;
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

        System.out.println("Linked List before deletion");
        printList(last);

        last = deleteAtEnd(last);

        System.out.println("Linked List after deletion");
        printList(last);
    }
}