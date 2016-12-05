#include "node.h"
#include <cstdlib>
using namespace std;

Node::Node() {
    key = -1;
    p = NULL;
    left = NULL;
    right = NULL;
}

Node::Node(int key) {
    this->key = key;
    p = NULL;
    left = NULL;
    right = NULL;
}

int Node::getKey() {
    return key;
}

Node* Node::getParent() {
    return p;
}

Node* Node::getLeft() {
    return left;
}

Node* Node::getRight() {
    return right;
}

void Node::setKey(int key) {
    this->key = key;
}

void Node::setParent(Node* p) {
    this->p = p;
}

void Node::setLeft(Node* left) {
    this->left = left;
}

void Node::setRight(Node* right) {
    this->right = right;
}
