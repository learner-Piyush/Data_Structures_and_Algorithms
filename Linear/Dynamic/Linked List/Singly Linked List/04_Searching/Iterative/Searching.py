# A Linked List Node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

"""Checks whether x is
present in linked list"""
def searchX(head, x):
    """Initialize curr with
    the head of linked list"""
    curr = head

    # Iterate over all the nodes
    while curr is not None:
        """If the current node's value
        is equal to x, return true"""
        if curr.data is x:
            return True
        
        # Move to the next node
        curr = curr.next
    
    """If there is no node with
    value as x, return false"""
    return False

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