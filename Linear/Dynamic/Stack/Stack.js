class Stack {
    constructor() {
        this.st = []
    }

    push(value) {
        this.st.push(value)
    }

    pop() {
        if (this.st.length > 0) {
            this.st.pop()
        } else {
            console.log("Stack is empty")
        }
    }

    top() {
        if (this.st.length > 0) {
            return this.st[this.st.length - 1]
        } else {
            console.log("Stack is empty")
        }
        return null
    }

    isEmpty() {
        return this.st.length === 0
    }

    size() {
        return this.st.length
    }
}

const st = new Stack()

st.push(1)
st.push(2)
st.push(3)

console.log("Top:", st.top())

st.pop()
console.log("After pop, top:", st.top())

console.log("Size:", st.size())

console.log("Is empty:", st.isEmpty() ? "Yes" : "No")