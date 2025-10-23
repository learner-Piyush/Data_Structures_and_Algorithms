class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

"""Function to traverse the doubly
linked list in backward direction"""
def backwardTraversal(tail):
    while tail is not None:
        print(tail.data, end="")
        if tail.prev is not None:
            print(" <-> ", end="")
        tail = tail.prev
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

print("Backward Traversal: ", end="")
backwardTraversal(third)