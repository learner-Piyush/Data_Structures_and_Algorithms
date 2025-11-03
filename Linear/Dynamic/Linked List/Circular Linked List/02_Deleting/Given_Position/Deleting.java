import java.util.Scanner;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class DeletingGivenPosition {
    public static Node deleteAtGivenPosition(Node last, int pos) {
        Node head = last.next;

        if ((last == null || pos < 1) || (head == last || pos == 1)) {
            return null;
        }

        if (pos == 1) {
            last.next = head.next;
            return last;
        }

        Node prev = head;
        Node curr = head.next;

        for (int i = 2; i < pos && curr != head; i++) {
            prev = curr;
            curr = curr.next;
        }

        if (curr == head)
        return last;

        prev.next = curr.next;

        if (curr == last)
        last = prev;

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

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a position: ");
        int pos = sc.nextInt();
        last = deleteAtGivenPosition(last, pos);
        sc.close();

        System.out.println("Linked List after deletion");
        printList(last);
    }
}