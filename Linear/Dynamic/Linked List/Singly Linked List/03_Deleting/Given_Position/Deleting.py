class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def deleteGivenNode(head, pos):
    temp = head

    if head is None or pos < 1:
        return None
    
    # Head is to be deleted
    if pos is 1:
        head = head.next
        temp = None
        return head
    
    # Traverse to the node before the one to be deleted
    prev = None
    for i in range(1, pos, 1):
        if temp is None:
            return head
        prev = temp
        temp = temp.next
    
    if temp is None:
        return head
    
    prev.next = temp.next
    return head

def printList(head):
    while head is not None:
        print(head.data, end="")
        if head.next is not None:
            print(" -> ", end="")
        head = head.next
    print()

head = Node(1)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(4)

print("Linked List before deletion\n")
printList(head)

pos = int(input("Enter a position: \n"))
head = deleteGivenNode(head, pos)

print("Linked List after deletion\n")
printList(head)