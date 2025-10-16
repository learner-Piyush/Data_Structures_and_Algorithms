# Define a node in the linked list
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Function to insert a new node at the beginning of the list
def insertAtFront(head, x):
    newNode = Node(x)
    newNode.next = head
    return newNode

def printList(head):
    while head is not None:
        print(head.data, end="")
        if head.next is not None:
            print(" -> ", end="")
        head = head.next
    print()

# Create the linked list: 2 -> 3 -> 4 -> 5
head = Node(2)
head.next = Node(3)
head.next.next = Node(4)
head.next.next.next = Node(5)
x = 1
print("Linked List before insertion\n")
printList(head)

# Insert a new node at the front of the list
head = insertAtFront(head, x)

print("Linked List after insertion\n")
printList(head)