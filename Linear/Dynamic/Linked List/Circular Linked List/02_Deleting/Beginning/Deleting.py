class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def deleteAtBeginning(last):
    head = last.next

    if last is None or last is head:
        return head
    
    last.next = head.next

    head = None

    return last

def printList(last):
    if last is None:
        return
    
    head = last.next
    temp = head

    while True:
        print(temp.data, end="")
        temp = temp.next
        if temp is not head:
            print(" -> ", end="")
        else:
            break
    
    print()

# Create circular linked list: 2 -> 3 -> 4
first = Node(2)
first.next = Node(3)
first.next.next = Node(4)

last = first.next.next
last.next = first

print("Linked List before deletion\n")
printList(last)

last = deleteAtBeginning(last)

print("Linked List after deletion\n")
printList(last)