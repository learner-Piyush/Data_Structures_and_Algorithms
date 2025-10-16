# Define a node in the linked list
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Function to insert a new node at the end of the list
def insertAtFront(head, x):
    newNode = Node(x)   # Create a new node

    """If the Linked List is empty, make
    the new node as the head and return"""
    if head is None:
        return newNode
    
    # Store the head reference in a temporary variable
    last = head

    # Traverse till the last node
    while last.next is not None:
        last = last.next
    
    """Change the next pointer of the
    last node to point to the new node"""
    last.next = newNode

    # Return the head of the list
    return head

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
x = 6
print("Linked List before insertion\n")
printList(head)

# Insert a new node at the end of the list
head = insertAtFront(head, x)

print("Linked List after insertion\n")
printList(head)