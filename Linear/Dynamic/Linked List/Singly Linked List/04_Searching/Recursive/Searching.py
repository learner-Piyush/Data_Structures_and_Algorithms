# A Linked List Node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

"""Checks whether x is
present in linked list"""
def searchX(head, x):
    # Base case
    if head is None:
        return False
    
    """If key is present in
    current node, return true"""
    if head.data is x:
        return True
    
    # Recur for remaining list
    return searchX(head.next, x)

def traverseList(head):
    while head is not None:
        print(head.data, end="")
        if head.next is not None:
            print(" -> ", end="")
        head = head.next
    print()

# Create a hard-coded linked list:
# 1 -> 2 -> 3 -> 4 -> 5
head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)
head.next.next.next.next = Node(5)

traverseList(head)

x = int(input("Enter a number: \n"))

if searchX(head, x):
    print("Number is present in the Linked List")
else:
    print("Number is not present in the Linked List")