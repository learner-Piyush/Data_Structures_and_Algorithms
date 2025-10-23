class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

# Function to remove the last node
def deleteLastNode(head):
    """Check if the list is empty or If the
    list has only one node, delete it"""
    if head is None or head.next is None:
        return None
    
    # Find the last node
    last = head
    while last.next is not None:
        last = last.next
    
    # Delete the last node
    last.prev.next = None
    last = None

    return head

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

print("Linked List before deletion\n")
printList(head)

head = deleteLastNode(head)

print("Linked List after deletion\n")
printList(head)