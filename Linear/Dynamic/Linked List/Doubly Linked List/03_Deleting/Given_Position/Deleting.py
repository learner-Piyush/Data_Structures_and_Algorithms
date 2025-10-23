class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

def deleteGivenNode(head, pos):
    temp = head

    if head is None or pos < 1:
        return None
    
    # Head is to be deleted
    if pos is 1:
        head = head.next
        temp = None
        if head is not None:
            head.prev = None
        return head
    
    # Traverse to the node before the one to be deleted
    for i in range(1, pos, 1):
        if temp is None:
            return head
        temp = temp.next
    
    if temp is None:
        return head
    
    if temp.prev is not None:
        temp.prev.next = temp.next
    
    if temp.next is not None:
        temp.next.prev = temp.prev
    
    return head

def printList(head):
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

print("Linked List before deletion\n")
printList(head)

pos = int(input("Enter a position: \n"))
head = deleteGivenNode(head, pos)

print("Linked List after deletion\n")
printList(head)