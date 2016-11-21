#include <iostream>
#include "linkedlist.h"
using namespace std;

LinkedList::LinkedList() {
    head = NULL;
}

bool LinkedList::isEmpty() {
    if (head == NULL)
        return true;
    else return false;
}

void LinkedList::insertAtFront(int data) {
    Node* x = new Node(data, head);
    head = x;
}

void LinkedList::print() {
    for (Node* i = head; i != NULL; i = i->getNext())
        cout << i->getData() << endl;
}

Node* LinkedList::search(int element) {
    for (Node* i = head; i != NULL; i = i->getNext())
        if (i->getData() == element)
            return i;
    return NULL;
}

int LinkedList::removeFromFront() {
    if (!isEmpty()) {
        Node* temp = head;
        int data = temp->getData();
        head = head->getNext();
        delete temp;
        return data;
    } else {
        cerr << "Underflow" << endl;
        return -1;
    }
}

void LinkedList::insertAfter(int data1, int data2) {
    Node* x = search(data1);
    Node* y = new Node(data2);
    y->setNext(x->getNext());
    x->setNext(y);
}
