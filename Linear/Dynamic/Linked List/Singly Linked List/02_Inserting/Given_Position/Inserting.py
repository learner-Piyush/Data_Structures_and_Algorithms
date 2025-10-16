# Define a node in the linked list
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insertAtGivenPosition(head, pos, x):
    if pos < 1:
        return head
    
    # head will change if pos = 1
    if pos == 1:
        newNode = Node(x)
        newNode.next = head
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

    # update the next pointers
    newNode.next = curr.next
    curr.next = newNode

    return head

def printList(head):
    while head is not None:
        print(head.data, end="")
        if head.next is not None:
            print(" -> ", end="")
        head = head.next
    print()

# Create the linked list: 1 -> 2 -> 4
head = Node(1)
head.next = Node(2)
head.next.next = Node(4)
x, pos = 3, 3
print("Linked List before insertion\n")
printList(head)

head = insertAtGivenPosition(head, pos, x)

print("Linked List after insertion\n")
printList(head)