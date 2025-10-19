class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Delete the head node and return the new head
def deleteHead(head):
    # Check if the list is empty
    if head is None:
        return None
    
    temp = head         # Store the current head in the temp

    head = head.next    # Move the head pointer to the next node

    temp = None         # Free the memory of the old head node

    return head

# Function to print the linked list
def printList(head):
    while head is not None:
        print(head.data, end="")
        if head.next is not None:
            print(" -> ", end="")
        head = head.next
    print()

# Create the linked list: 8 -> 2 -> 3 -> 1 -> 7
head = Node(8)
head.next = Node(2)
head.next.next = Node(3)
head.next.next.next = Node(1)
head.next.next.next.next = Node(7)

print("Linked List before deletion\n")
printList(head)

head = deleteHead(head)

print("Linked List after deletion\n")
printList(head)