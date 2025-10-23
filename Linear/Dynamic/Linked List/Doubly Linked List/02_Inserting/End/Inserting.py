class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

"""Function to insert a new node at
the end of doubly linked list"""
def insertAtEnd(head, x):
    newNode = Node(x)           # Create a new node
    """If the Linked List is empty, make
    the new node as the head and return"""
    if head is None:
        return newNode
    
    # Store the head reference in a temporary variable
    last = head

    # Traverse till the last node
    while last.next is not None:
        last = last.next
    
    last.next = newNode     # Set the next of last node to new node

    newNode.prev = last     # Set prev of new node to last node

    return head             # Return the head of the list

def printList(head):
    while head is not None:
        print(head.data, end="")
        if head.next is not None:
            print(" <-> ", end="")
        head = head.next
    print()

# Create a hardcoded doubly linked list:
# 1 <-> 2 <-> 3
head = Node(1)
second = Node(2)
third = Node(3)

head.next = second
second.prev = head
second.next = third
third.prev = second

x = 4
print("Linked List before insertion\n")
printList(head)

# Insert a new node at the end of the list
head = insertAtEnd(head, x)

print("Linked List after insertion\n")
printList(head)