#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__
#include "node.h"

class LinkedList {
private:
    Node* head;
public:
    LinkedList();
    bool isEmpty();
    void insertAtFront(int data);
    void print();
    Node* search(int element);
    int removeFromFront();
    void insertAfter(int data1, int data2);
    // void insertAtBack(int data) <-- implement this
    // write a function to remove some element from anywhere in the list
    // rewrite the whole code to store strings instead of integers
};

#endif

