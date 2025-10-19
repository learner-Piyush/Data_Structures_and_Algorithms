class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Function to remove the last node
def deleteLastNode(head):
    """Check if the list is empty or If the
    list has only one node, delete it"""
    if head is None or head.next is None:
        return None
    
    # Find the second last node
    secondLast = head
    while secondLast.next.next is not None:
        secondLast = secondLast.next
    
    # Delete the last node
    secondLast.next = None

    return head

# Function to print the linked list
def printList(head):
    while head is not None:
        print(head.data, end="")
        if head.next is not None:
            print(" -> ", end="")
        head = head.next
    print()

# Create the linked list: 1 -> 2 -> 3 -> 4 -> 5
head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)
head.next.next.next.next = Node(5)

print("Linked List before deletion\n")
printList(head)

head = deleteLastNode(head)

print("Linked List after deletion\n")
printList(head)