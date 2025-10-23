class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

# Function to insert a new node at a given position
def insertAtGivenPosition(head, pos, x):
    if pos < 1:
        return head
    
    # head will change if pos = 1
    if pos == 1:
        newNode = Node(x)
        newNode.next = head
        if head is not None:
            head.prev = newNode
        return newNode
    
    curr = head

    """Traverse to the node that will be
    present just before the new node"""
    for i in range(1, pos - 1, 1):
        if curr is None:
            return head
        curr = curr.next
    
    """If position is greater
    than the number of nodes"""
    if curr is None:
        return head
    
    newNode = Node(x)

    # update the next and previous pointers
    newNode.next = curr.next
    newNode.prev = curr
    curr.next = newNode
    if newNode.next is not None:
        newNode.next.prev = newNode

    return head

def printList(head):
    while head is not None:
        print(head.data, end="")
        if head.next is not None:
            print(" <-> ", end="")
        head = head.next
    print()

# Create a hardcoded doubly linked list:
# 1 <-> 2 <-> 4
head = Node(1)
second = Node(2)
third = Node(4)

head.next = second
second.prev = head
second.next = third
third.prev = second

x, pos = 3, 3
print("Linked List before insertion\n")
printList(head)

head = insertAtGivenPosition(head, pos, x)

print("Linked List after insertion\n")
printList(head)