#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include <iostream>
#include "node.h"
using namespace std;

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

#endif
