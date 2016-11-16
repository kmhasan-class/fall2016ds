#include <iostream>
#include <cstdlib>
using namespace std;

class Node {
private:
    int data;
    Node* next;
public:
    Node() {
        data = 0;
        next = NULL;
    }

    Node(int newdata) {
        data = newdata;
        next = NULL;
    }

    Node(int newdata, Node* newnext) {
        data = newdata;
        next = newnext;
    }

    // getter methods / accessor methods
    int getData() {
        return data;
    }

    Node* getNext() {
        return next;
    }

    // setter methods / mutator methods
    void setData(int newdata) {
        data = newdata;
    }

    void setNext(Node* newnext) {
        next = newnext;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    bool isEmpty() {
        if (head == NULL)
            return true;
        else return false;
    }

    void insertAtFront(int data) {
        Node* x = new Node(data, head);
        head = x;
    }

    void print() {
        for (Node* i = head; i != NULL; i = i->getNext())
            cout << i->getData() << endl;
    }
};

int main() {
    LinkedList list;
    list.insertAtFront(17);
    list.insertAtFront(27);
    list.insertAtFront(37);
    list.insertAtFront(7);
    list.insertAtFront(52);
    list.print();
    return 0;
}
