class Queue {
    constructor() {
        this.q = []
    }

    enqueue(value) {
        this.q.push(value)
    }

    dequeue() {
        if (this.q.length > 0) {
            this.q.shift()
        } else {
            console.log("Queue is empty")
        }
    }

    getFront() {
        if (this.q.length > 0) {
            return this.q[0]
        } else {
            console.log("Queue is empty")
        }
        return null
    }

    getRear() {
        if (this.q.length > 0) {
            return this.q[this.q.length - 1]
        } else {
            console.log("Queue is empty")
        }
        return null
    }

    isEmpty() {
        return this.q.length === 0
    }

    size() {
        return this.q.length
    }
}

const q = new Queue()

q.enqueue(1)
q.enqueue(8)
q.enqueue(3)

console.log("Front:", q.getFront())

console.log("Rear:", q.getRear())

q.dequeue()
console.log("After dequeue, front:", q.getFront())

console.log("Size:", q.size())

console.log("Is empty:", q.isEmpty() ? "Yes" : "No")