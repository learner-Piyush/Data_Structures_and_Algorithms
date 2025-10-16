# A Linked List Node
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Function to traverse and print the singly linked list (recursive)
def traverseList(head):
    # base condition is when the head is None
    if head is None:
        print()
        return
    
    # printing the current node data
    print(head.data, end="")

    # print arrow if not the last node
    if head.next is not None:
        print(" -> ", end="")
    
    # moving to the next node
    traverseList(head.next)

# Create a hard-coded linked list:
# 10 -> 20 -> 30 -> 40
head = Node(10)
head.next = Node(20)
head.next.next = Node(30)
head.next.next.next = Node(40)

traverseList(head)