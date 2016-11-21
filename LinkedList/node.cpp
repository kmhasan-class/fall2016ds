#include <cstdlib>
#include "node.h"

// :: scope resolution operator
Node::Node() {
    data = 0;
    next = NULL;
}

Node::Node(int newdata) {
    data = newdata;
    next = NULL;
}

Node::Node(int newdata, Node* newnext) {
    data = newdata;
    next = newnext;
}

// getter methods / accessor methods
int Node::getData() {
    return data;
}

Node* Node::getNext() {
    return next;
}

// setter methods / mutator methods
void Node::setData(int newdata) {
    data = newdata;
}

void Node::setNext(Node* newnext) {
    next = newnext;
}
