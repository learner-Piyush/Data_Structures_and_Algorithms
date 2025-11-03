class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def deleteAtEnd(last):
    head = last.next

    if last is None or last is head:
        return head
    
    secondLast = head
    while secondLast.next is not last:
        secondLast = secondLast.next
    
    secondLast.next = head

    last = secondLast

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

last = deleteAtEnd(last)

print("Linked List after deletion\n")
printList(last)