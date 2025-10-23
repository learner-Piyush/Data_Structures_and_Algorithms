class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

# Delete the head node and return the new head
def deleteHead(head):
    # Check if the list is empty
    if head is None:
        return None
    
    temp = head         # Store the current head in the temp

    head = head.next    # Move the head pointer to the next node

    temp = None         # Free the memory of the old head node

    # Set prev of the new head
    if head is not None:
        head.prev = None

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

head = deleteHead(head)

print("Linked List after deletion\n")
printList(head)