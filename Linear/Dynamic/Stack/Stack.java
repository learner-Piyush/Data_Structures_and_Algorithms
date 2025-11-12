import java.util.Stack;

class MyStack {
    private Stack<Integer> st = new Stack<>();

    public void push(int value) {
        st.push(value);
    }

    public void pop() {
        if (!st.isEmpty()) {
            st.pop();
        } else {
            System.out.println("Stack is empty");
        }
    }

    public int top() {
        if (!st.isEmpty()) {
            return st.peek();
        } else {
            System.out.println("Stack is empty");
        }
        return -1;
    }

    public boolean isEmpty() {
        return st.isEmpty();
    }

    public int size() {
        return st.size();
    }
}

class StackOperation {
    public static void main(String[] args) {
        MyStack st = new MyStack();

        st.push(1);
        st.push(2);
        st.push(3);

        System.out.println("Top: " + st.top());

        st.pop();
        System.out.println("After pop, top: " + st.top());

        System.out.println("Size: " + st.size());

        System.out.println("Is empty: " + (st.isEmpty() ? "Yes" : "No"));
    }
}