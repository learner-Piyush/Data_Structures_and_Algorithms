import java.util.Scanner;

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

class DeletingGivenPosition {
    public static Node deleteGivenNode(Node head, int pos) {
        Node temp = head;

        if (head == null || pos < 1)
        return null;

        // Head is to be deleted
        if (pos == 1) {
            head = head.next;
            temp = null;
            if (head != null)
            head.prev = null;
            return head;
        }

        // Traverse to the node before the one to be deleted
        for (int i = 1; i < pos && temp != null; i++) {
            temp = temp.next;
        }

        if (temp == null)
        return head;

        if (temp.prev != null)
        temp.prev.next = temp.next;

        if (temp.next != null)
        temp.next.prev = temp.prev;

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

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a position: ");
        int pos = sc.nextInt();

        head = deleteGivenNode(head, pos);

        sc.close();
        
        System.out.println("Linked List after deletion");
        printList(head);
    }
}