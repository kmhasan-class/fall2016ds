#include <iostream>
using namespace std;

class Queue {
private:
    static const int MAXN = 8;
    int array[MAXN];
    int head;
    int tail;

public:
    Queue() {
        head = 0;
        tail = 0;
    }

    void push(int x) {
        if (tail < MAXN) {
            array[tail] = x;
            tail++;
        } else cerr << "OVERFLOW" << endl;
        // HOMEWORK: move over values to the left
        // when the queue is full
    }

    void pop() {
        if (!isEmpty())
            head++;
        else cerr << "UNDERFLOW" << endl;
    }

    bool isEmpty() {
        if (head == tail)
            return true;
        else return false;
    }

    int peek() {
        if (!isEmpty())
            return array[head];
        else {
            cerr << "QUEUE IS EMPTY ALREADY" << endl;
            return -1;
        }
    }
};

int main() {
    Queue q;
    q.push(60);
    q.push(40);
    q.push(90);
    q.push(20);

    while (!q.isEmpty()) {
        cout << q.peek() << endl;
        q.pop();
    }

    for (int i = 1; i <= 8; i++) {
        cout << "Inserting " << i << endl;
        q.push(i);
    }

    return 0;
}
