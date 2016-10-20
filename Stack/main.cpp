#include <iostream>
using namespace std;

class Stack {
private:
    int array[5];
    int top;

public:
    Stack() {
        top = 0;
    }

    void push(int data) {
        if (top < 5) {
            array[top] = data;
            top = top + 1;
        } else cerr << "Stack is full. Push operation is not permitted!" << endl;
    }

    void pop() {
        if (!isEmpty())
            top = top - 1;
        else cerr << "Stack is already empty. Pop operation is not allowed here!" << endl;
    }

    bool isEmpty() {
        if (top == 0)
            return true;
        else return false;
        // the following line does the same thing
        // as the previous three lines
        //return top == 0;
    }

    int peek() {
        if (!isEmpty())
            return array[top - 1];
        else {
            cerr << "Stack is already empty. Peek call is not allowed here!" << endl;
            return -1;
        }
    }
};

int main() {
    Stack s;
    s.push(30);
    s.push(20);
    s.pop();
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
    return 0;
}
