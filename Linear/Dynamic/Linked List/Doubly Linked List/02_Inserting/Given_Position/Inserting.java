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

class InsertingGivenPosition {
    // Function to insert a new node at a given position
    public static Node insertAtGivenPosition(Node head, int pos, int x) {
        if (pos < 1)
        return head;

        // head will change if pos = 1
        if (pos == 1) {
            Node newNode = new Node(x);
            newNode.next = head;
            if (head != null)
            head.prev = newNode;
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

        // update the next and previous pointers
        newNode.next = curr.next;
        newNode.prev = curr;
        curr.next = newNode;
        if (newNode.next != null)
        newNode.next.prev = newNode;
        
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
        // 1 <-> 2 <-> 4
        Node head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(4);

        head.next = second;
        second.prev = head;
        second.next = third;
        third.prev = second;

        int x = 3, pos = 3;
        System.out.println("Linked List before insertion");
        printList(head);

        head = insertAtGivenPosition(head, pos, x);
        
        System.out.println("Linked List after insertion");
        printList(head);
    }
}