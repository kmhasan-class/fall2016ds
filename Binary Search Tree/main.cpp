#include "bst.h"
#include <iostream>
using namespace std;

int main() {
    BST tree;
    cout << "Number of nodes " << tree.countNodes(tree.getRoot()) << endl;

    tree.treeInsert(54);
    tree.treeInsert(45);
    tree.treeInsert(43);
    tree.treeInsert(68);
    tree.treeInsert(96);
    tree.treeInsert(32);
    tree.treeInsert(47);

    cout << "Inorder Tree Walk" << endl;
    tree.inorderTreeWalk(tree.getRoot());

    cout << "Minimum value " << tree.treeMinimum(tree.getRoot())->getKey() << endl;

    cout << "Searching for 72" << endl;
    cout << tree.treeSearch(tree.getRoot(), 72) << endl;

    cout << "Number of nodes " << tree.countNodes(tree.getRoot()) << endl;
    return 0;
}
