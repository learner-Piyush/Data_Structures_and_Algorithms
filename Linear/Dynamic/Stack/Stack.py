class Stack:
    def __init__(self):
        self.st = []
    
    def push(self, value):
        self.st.append(value)
    
    def pop(self):
        if self.st:
            self.st.pop()
        else:
            print("Stack is empty")
    
    def top(self):
        if self.st:
            return self.st[-1]
        else:
            print("Stack is empty")
        return None
    
    def isEmpty(self):
        return len(self.st) == 0
    
    def size(self):
        return len(self.st)

st = Stack()

st.push(1)
st.push(2)
st.push(3)

print("Top:", st.top())

st.pop()
print("After pop, top:", st.top())

print("Size:", st.size())

print("Is empty:", "Yes" if st.isEmpty() else "No")