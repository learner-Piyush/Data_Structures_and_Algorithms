#include <iostream>
#include <stack>
using namespace std;

class Stack {
private:
    stack<int> st;
public:
    void push(int value) {
        st.push(value);
    }

    void pop() {
        if (!st.empty()) {
            st.pop();
        } else {
            cout << "Stack is empty";
        }
    }

    int top() {
        if (!st.empty()) {
            return st.top();
        } else {
            cout << "Stack is empty";
        }
        return -1;
    }

    bool isEmpty() {
        return st.empty();
    }

    int size() {
        return st.size();
    }
};

int main() {
    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top: " << st.top() << endl;

    st.pop();
    cout << "After pop, top: " << st.top() << endl;

    cout << "Size: " << st.size() << endl;

    cout << "Is empty: " << (st.isEmpty() ? "Yes": "No") << endl;

    return 0;
}