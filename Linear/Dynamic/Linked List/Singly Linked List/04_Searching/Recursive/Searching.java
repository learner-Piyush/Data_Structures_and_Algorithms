// A Linked List Node

import java.util.Scanner;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class RecursiveSearchingList {
    /*Checks whether x is
    present in linked list*/
    public static boolean searchX(Node head, int x) {
        // Base case
        if (head == null)
        return false;

        /*If x is present in
        current node, return true*/
        if (head.data == x)
        return true;

        // Recur for remaining list
        return searchX(head.next, x);
    }

    public static void traverseList(Node head) {
        while (head != null) {
            System.out.print(head.data);
            if (head.next != null)
            System.out.print(" -> ");
            head = head.next;
        }

        System.out.println();
    }

    public static void main(String[] args) {
        // Create a hard-coded linked list:
        // 1 -> 2 -> 3 -> 4 -> 5
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(3);
        head.next.next.next = new Node(4);
        head.next.next.next.next = new Node(5);

        traverseList(head);

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        int x = sc.nextInt();

        if (searchX(head, x)) {
            System.out.println("Number is present in the Linked List");
        } else {
            System.out.println("Number is not present in the Linked List");
        }
        
        sc.close();
    }
}