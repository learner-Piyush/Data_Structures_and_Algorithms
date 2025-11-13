#include <iostream>
#include <queue>
using namespace std;

class Queue
{
private:
    queue<int> q;
public:
    void enqueue(int value) {
        q.push(value);
    }

    void dequeue() {
        if (!q.empty()) {
            q.pop();
        } else {
            cout << "Queue is empty";
        }
    }

    int getFront() {
        if (!q.empty()) {
            return q.front();
        } else {
            cout << "Queue is empty";
        }
        return -1;
    }

    int getRear() {
        if (!q.empty()) {
            return q.back();
        } else {
            cout << "Queue is empty";
        }
        return -1;
    }

    bool isEmpty() {
        return q.empty();
    }

    int size() {
        return q.size();
    }
};

int main() {
    Queue q;

    q.enqueue(1);
    q.enqueue(8);
    q.enqueue(3);

    cout << "Front: " << q.getFront() << endl;

    cout << "Rear: " << q.getRear() << endl;

    q.dequeue();
    cout << "After dequeue, front: " << q.getFront() << endl;

    cout << "Size: " << q.size() << endl;

    cout << "Is empty: " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}