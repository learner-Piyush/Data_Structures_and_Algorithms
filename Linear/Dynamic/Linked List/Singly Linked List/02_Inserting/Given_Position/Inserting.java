// Define a node in the linked list
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class InsertingGivenPosition {
    public static Node insertAtGivenPosition(Node head, int pos, int x) {
        if (pos < 1)
        return head;

        // head will change if pos = 1
        if (pos == 1) {
            Node newNode = new Node(x);
            newNode.next = head;
            return newNode;
        }

        Node curr = head;

        /*Traverse to the node that will be
        present just before the new node*/
        for (int i = 1; i < pos - 1 && curr != null; i++) {
            curr = curr.next;
        }

        /*If position is greater
        than the number of nodes*/
        if (curr == null)
        return head;

        Node newNode = new Node(x);

        // update the next pointers
        newNode.next = curr.next;
        curr.next = newNode;
        
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
        // Create the linked list: 1 -> 2 -> 4
        Node head = new Node(1);
        head.next = new Node(2);
        head.next.next = new Node(4);
        int x = 3, pos = 3;
        System.out.println("Linked List before insertion");
        printList(head);

        head = insertAtGivenPosition(head, pos, x);
        
        System.out.println("Linked List after insertion");
        printList(head);
    }
}