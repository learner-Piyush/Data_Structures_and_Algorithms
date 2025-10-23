class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

# Recursive function for backward traversal
def backwardTraversal(tail):
    if tail is None:
        print()
        return
    
    # Print current node's data
    print(tail.data, end="")
    if tail.prev is not None:
        print(" <-> ", end="")
    
    # Recursive call with the previous node
    backwardTraversal(tail.prev)

# Create a hardcoded doubly linked list:
# 1 <-> 2 <-> 3
head = Node(1)
second = Node(2)
third = Node(3)

head.next = second
second.prev = head
second.next = third
third.prev = second

print("Backward Traversal: ", end="")
backwardTraversal(third)