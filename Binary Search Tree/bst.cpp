#include "bst.h"
#include <cstdlib>
#include <iostream>
using namespace std;

BST::BST() {
    root = NULL;
}

void BST::treeInsert(int key) {
    // page 294 of CLRS 3rd Ed
    Node* z = new Node(key);

    // line 1-2
    Node* y = NULL;
    Node* x = root;

    // line 3-7
    while (x != NULL) {
        y = x;
        if (z->getKey() < x->getKey())
            x = x->getLeft();
        else x = x->getRight();
    }

    // line 8
    z->setParent(y);

    // line 9-13
    if (y == NULL)
        root = z;
    else if (z->getKey() < y->getKey())
        y->setLeft(z);
    else y->setRight(z);
}

void BST::inorderTreeWalk(Node* x) {
    // page 288 CLRS 3rd Ed
    if (x != NULL) {
        inorderTreeWalk(x->getLeft());
        cout << x->getKey() << endl;
        inorderTreeWalk(x->getRight());
    }
}

Node* BST::getRoot() {
    return root;
}

Node* BST::treeMinimum(Node* x) {
    // page 291
    while (x->getLeft() != NULL)
        x = x->getLeft();
    return x;
}

Node* BST::treeSearch(Node* x, int k) {
    // page 290
    if (x == NULL || k == x->getKey())
        return x;
    if (k < x->getKey())
        return treeSearch(x->getLeft(), k);
    else return treeSearch(x->getRight(), k);
}

int BST::countNodes(Node* x) {
    // base case
    if (x == NULL)
        return 0;

    // recursive cases
    int leftCount = countNodes(x->getLeft());
    int rightCount = countNodes(x->getRight());
    int totalCount = leftCount + rightCount + 1;
    return totalCount;
}
