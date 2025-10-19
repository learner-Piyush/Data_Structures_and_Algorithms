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
    public static Node deleteGivenNode(Node head, int pos) {
        Node temp = head;

        if (head == null || pos < 1)
        return null;

        // Head is to be deleted
        if (pos == 1) {
            head = head.next;
            temp = null;
            return head;
        }

        // Traverse to the node before the one to be deleted
        Node prev = null;
        for (int i = 1; i < pos && temp != null; i++) {
            prev = temp;
            temp = temp.next;
        }

        if (temp == null)
        return head;

        // Delete the node at the position
        prev.next = temp.next;

        return head;
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
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);

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