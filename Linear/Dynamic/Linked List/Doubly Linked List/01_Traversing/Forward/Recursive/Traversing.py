class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

# Recursive function for forward traversal
def forwardTraversal(head):
    if head is None:
        print()
        return
    
    # Print current node's data
    print(head.data, end="")
    if head.next is not None:
        print(" <-> ", end="")
    
    # Recursive call with the next node
    forwardTraversal(head.next)

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