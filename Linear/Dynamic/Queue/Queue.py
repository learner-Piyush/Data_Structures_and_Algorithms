from collections import deque

class Queue:
    def __init__(self):
        self.q = deque()
    
    def enqueue(self, value):
        self.q.append(value)
    
    def dequeue(self):
        if self.q:
            self.q.popleft()
        else:
            print("Queue is empty")
    
    def getFront(self):
        if self.q:
            return self.q[0]
        else:
            print("Queue is empty")
    
    def getRear(self):
        if self.q:
            return self.q[-1]
        else:
            print("Queue is empty")
    
    def isEmpty(self):
        return len(self.q) == 0
    
    def size(self):
        return len(self.q)

q = Queue()

q.enqueue(1)
q.enqueue(8)
q.enqueue(3)

print("Front:", q.getFront())

print("Rear:", q.getRear())

q.dequeue()
print("After dequeue, front:", q.getFront())

print("Size:", q.size())

print("Is empty:", "Yes" if q.isEmpty() else "No")