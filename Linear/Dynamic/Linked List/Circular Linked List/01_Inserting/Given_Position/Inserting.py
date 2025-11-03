class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def insertAtGivenPosition(last, pos, x):
    newNode = Node(x)

    if last is None:
        newNode.next = newNode
        return newNode
    
    if pos is 1:
        newNode.next = last.next
        last.next = newNode
        
        return last
    
    curr = last.next

    for i in range(1, pos - 1, 1):
        if curr is not last:
            curr = curr.next
    
    newNode.next = curr.next
    curr.next = newNode

    if curr is last:
        last = newNode
    
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

print("Linked List before insertion\n")
printList(last)

x = 5
pos = int(input("Enter a position: "))
last = insertAtGivenPosition(last, pos, x)

print("Linked List after insertion\n")
printList(last)