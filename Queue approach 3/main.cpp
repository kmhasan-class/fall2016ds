#include <iostream>
using namespace std;

class Queue {
private:
    static const int MAXN = 8;
    int array[MAXN];
    int head;
    int tail;
    int numberOfElements;

public:
    Queue() {
        head = 0;
        tail = 0;
        numberOfElements = 0;
    }

    void push(int x) {
        if (numberOfElements < MAXN) {
            array[tail] = x;
            tail++;
            if (tail == MAXN)
                tail = 0;
            numberOfElements++;
        } else {
            cerr << "OVERFLOW" << endl;
        }
    }

    void pop() {
        if (!isEmpty()) {
            head++;
            if (head == MAXN)
                head = 0;
            numberOfElements--;
        } else {
            cerr << "UNDERFLOW" << endl;
        }
    }

    bool isEmpty() {
        if (numberOfElements == 0)
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

    for (int i = 1; i <= 10; i++) {
        cout << "Inserting " << i << endl;
        q.push(i);
    }

    for (int i = 1; i <= 10; i++)
        q.pop();

    for (int i = 1; i <= 8; i++) {
        cout << "Inserting " << i * 100 << endl;
        q.push(i * 100);
    }

    return 0;
}

