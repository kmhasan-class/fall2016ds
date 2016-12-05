#include "bst.h"
#include <iostream>
using namespace std;

int main() {
    BST tree;
    tree.treeInsert(54);
    tree.treeInsert(45);
    tree.treeInsert(43);
    tree.treeInsert(68);
    tree.treeInsert(96);
    tree.treeInsert(32);
    tree.treeInsert(47);
    tree.inorderTreeWalk(tree.getRoot());
    return 0;
}
