class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insertAtBeginning(tail, x):
    newNode = Node(x)

    if tail is None:
        newNode.next = newNode
        return newNode
    
    newNode.next = tail.next
    tail.next = newNode

    tail = newNode

    return tail

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

print("Linked List before insertion\n")
printList(last)

x = 5
last = insertAtBeginning(last, x)

print("Linked List after insertion\n")
printList(last)