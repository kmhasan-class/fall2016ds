#include <iostream>
using namespace std;

class Deque {
private:
    static const int MAXN = 8;
    int array[MAXN];
    int head;
    int tail;
    int numberOfElements;

public:
    Deque() {
        head = 0;
        tail = 0;
        numberOfElements = 0;
    }

    void insertAtBack(int x) {
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

    void insertAtFront(int x) {
        if (numberOfElements < MAXN) {
            head--;
            if (head < 0)
                head = MAXN - 1;
            array[head] = x;
            numberOfElements++;
        } else {
            cerr << "OVERFLOW" << endl;
        }
    }

    void removeFromFront() {
        if (!isEmpty()) {
            head++;
            if (head == MAXN)
                head = 0;
            numberOfElements--;
        } else {
            cerr << "UNDERFLOW" << endl;
        }
    }

    void removeFromBack() {
        if (!isEmpty()) {
            tail--;
            if (tail < 0)
                tail = MAXN - 1;
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

    int peekFront() {
        if (!isEmpty())
            return array[head];
        else {
            cerr << "QUEUE IS EMPTY ALREADY" << endl;
            return -1;
        }
    }

    int peekBack() {
        if (!isEmpty()) {
            int index = tail - 1;
            if (tail < 0)
                index = MAXN - 1;
            return array[index];
        } else {
            cerr << "QUEUE IS EMPTY ALREADY" << endl;
            return -1;
        }
    }
};

int main() {
    Deque d;
    d.insertAtBack(10);
    d.insertAtBack(20);
    d.insertAtBack(30);
    d.insertAtFront(60);
    d.insertAtFront(40);

    while (!d.isEmpty()) {
        cout << d.peekFront() << endl;
        d.removeFromBack();
    }
    return 0;
}


