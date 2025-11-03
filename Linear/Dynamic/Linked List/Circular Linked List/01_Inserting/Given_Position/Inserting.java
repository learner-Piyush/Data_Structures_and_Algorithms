import java.util.Scanner;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class InsertingGivenPosition {
    public static Node insertAtGivenPosition(Node last, int pos, int x) {
        Node newNode = new Node(x);

        if (last == null) {
            newNode.next = newNode;
            return newNode;
        }

        if (pos == 1) {
            newNode.next = last.next;
            last.next = newNode;
    
            return last;
        }

        Node curr = last.next;

        for (int i = 1; i < pos - 1 && curr != last; i++) {
            curr = curr.next;
        }

        newNode.next = curr.next;
        curr.next = newNode;

        if (curr == last)
        last = newNode;

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

        System.out.println("Linked List before insertion");
        printList(last);

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a position: ");
        int x = 5, pos = sc.nextInt();
        last = insertAtGivenPosition(last, pos, x);
        sc.close();

        System.out.println("Linked List after insertion");
        printList(last);
    }
}