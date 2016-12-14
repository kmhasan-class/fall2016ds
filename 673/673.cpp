#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAXN = 200;
    char array[MAXN];
    int top;

public:
    Stack() {
        top = 0;
    }

    void push(char data) {
        if (top < MAXN) {
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

    char peek() {
        if (!isEmpty())
            return array[top - 1];
        else {
            cerr << "Stack is already empty. Peek call is not allowed here!" << endl;
            return -1;
        }
    }
};

bool isBalanced(string s) {
    //cout << "Processing *" << s << "*" << endl;
    Stack myStack;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(')
            myStack.push('(');
        else if (s[i] == '[')
            myStack.push('[');
        else if (s[i] == ')') {
            if (!myStack.isEmpty()) {
                if (myStack.peek() == '(')
                    myStack.pop();
                else return false;
            } else return false;
        } else if (s[i] == ']') {
            if (!myStack.isEmpty()) {
                if (myStack.peek() == '[')
                    myStack.pop();
                else return false;
            } else return false;
        }
    }

    if (myStack.isEmpty())
        return true;
    else return false;
}

int main() {
    int testCases;
    string s;

    cin >> testCases;
    getline(cin, s);

    for (int i = 0; i < testCases; i++) {
        getline(cin, s);
        if (isBalanced(s))
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
