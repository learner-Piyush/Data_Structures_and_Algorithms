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

class IterativeSearchingList {
    /*Checks whether x is
    present in linked list*/
    public static boolean searchX(Node head, int x) {
        /*Initialize curr with
        the head of linked list*/
        Node curr = head;

        // Iterate over all the nodes
        while (curr != null) {
            /*If the current node's value
            is equal to x, return true*/
            if (curr.data == x)
            return true;

            // Move to the next node
            curr = curr.next;
        }

        /*If there is no node with
        value as x, return false*/
        return false;
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