#ifndef __BST_H_
#define __BST_H_
#include "node.h"

class BST {
private:
    Node* root;

public:
    BST();
    void treeInsert(int key);
    void inorderTreeWalk(Node* x);
    Node* getRoot();
    Node* treeMinimum(Node* x);
    Node* treeSearch(Node* x, int k);
};

#endif
