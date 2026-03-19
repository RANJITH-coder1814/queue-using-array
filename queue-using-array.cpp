#include <iostream>
using namespace std;

#define MAX 100

class Queue {
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow\n";
            return;
        }
        arr[++rear] = x;
        cout << x << " enqueued\n";
    }

    // Dequeue operation
    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow\n";
            return;
        }
        cout << arr[front++] << " dequeued\n";
    }

    // Get front element
    void getFront() {
        if (front > rear) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Front Element: " << arr[front] << endl;
    }

    // Check if empty
    bool isEmpty() {
        return (front > rear);
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.getFront();

    q.dequeue();
    q.getFront();

    return 0;
}
