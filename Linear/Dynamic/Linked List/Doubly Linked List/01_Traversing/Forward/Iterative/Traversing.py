class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

"""Function to traverse the doubly
linked list in forward direction"""
def forwardTraversal(head):
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

print("Forward Traversal: ", end="")
forwardTraversal(head)