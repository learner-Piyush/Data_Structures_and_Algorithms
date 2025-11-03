class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def deleteAtEnd(last, pos):
    head = last.next

    if (last is None or pos < 1) or (head is last or pos is 1):
        return None
    
    if pos is 1:
        last.next = head.next
        return last
    
    prev = head
    curr = head.next

    for i in range(2, pos, 1):
        if curr is head:
            return last
        prev = curr
        curr = curr.next
    
    if curr is head:
        return last
    
    prev.next = curr.next

    if curr is last:
        last = prev

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

pos = int(input("Enter a position: \n"))
last = deleteAtEnd(last, pos)

print("Linked List after deletion\n")
printList(last)