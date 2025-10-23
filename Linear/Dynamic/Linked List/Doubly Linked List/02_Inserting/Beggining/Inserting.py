class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

"""Function to insert a new node at
the front of doubly linked list"""
def insertAtFront(head, x):
    newNode = Node(x)           # Create a new node
    newNode.next = head         # Make next of new node as head
    if head is not None:
        head.prev = newNode     # Change prev of head node to new node
    return newNode              # Return the new node as the head

def printList(head):
    while head is not None:
        print(head.data, end="")
        if head.next is not None:
            print(" <-> ", end="")
        head = head.next
    print()

# Create a hardcoded doubly linked list:
# 2 <-> 3 <-> 4
head = Node(2)
second = Node(3)
third = Node(4)

head.next = second
second.prev = head
second.next = third
third.prev = second

x = 1
print("Linked List before insertion\n")
printList(head)

# Insert a new node at the front of the list
head = insertAtFront(head, x)

print("Linked List after insertion\n")
printList(head)