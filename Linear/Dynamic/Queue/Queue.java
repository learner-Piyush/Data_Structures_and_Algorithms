import java.util.LinkedList;
import java.util.Queue;

class MyQueue {
    private Queue<Integer> q = new LinkedList<>();

    public void enqueue(int value) {
        q.add(value);
    }

    public void dequeue() {
        if (!q.isEmpty()) {
            q.poll();
        } else {
            System.out.println("Queue is empty");
        }
    }

    public int getFront() {
        if (!q.isEmpty()) {
            return q.peek();
        } else {
            System.out.println("Queue is empty");
        }
        return -1;
    }

    public int getRear() {
        if (!q.isEmpty()) {
            return ((LinkedList<Integer>) q).getLast();
        } else {
            System.out.println("Queue is empty");
        }
        return -1;
    }

    public boolean isEmpty() {
        return q.isEmpty();
    }

    public int size() {
        return q.size();
    }
}

class QueueOperation {
    public static void main(String[] args) {
        MyQueue q = new MyQueue();

        q.enqueue(1);
        q.enqueue(8);
        q.enqueue(3);

        System.out.println("Front: " + q.getFront());

        System.out.println("Rear: " + q.getRear());

        q.dequeue();
        System.out.println("After dequeue, front: " + q.getFront());

        System.out.println("Size: " + q.size());

        System.out.println("Is empty: " + (q.isEmpty() ? "Yes" : "No"));
    }
}